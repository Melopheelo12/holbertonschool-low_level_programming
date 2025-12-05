#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * error_exit - affiche un message d'erreur sur STDERR et quitte
 * @code: code de sortie
 * @message: message formaté (comme printf)
 * @arg: argument à insérer dans le message
 */
void error_exit(int code, const char *message, int arg)
{
    dprintf(STDERR_FILENO, message, arg);
    exit(code);
}

int main(int argc, char *argv[])
{
    int fd_from, fd_to;
    ssize_t bytes_read, bytes_written;
    char buffer[1024];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    /* Ouvrir le fichier source en lecture */
    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    /* Ouvrir/créer le fichier destination */
    fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        close(fd_from);
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    /* Copier le contenu par blocs de 1024 octets */
    while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written != bytes_read)
        {
            close(fd_from);
            close(fd_to);
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }

    if (bytes_read == -1)
    {
        close(fd_from);
        close(fd_to);
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
