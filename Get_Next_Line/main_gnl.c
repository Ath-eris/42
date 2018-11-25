int get_next_line(const int fd, char **line);

int main(int ac, char **av)
{
  const char *file = "/home/mathilde/42/Get_Next_Line/fichier_test.txt";
  int x = 7;
  char *buf;

  FILE *fd = fopen(file, "w");
  if (fd)
  {
    get_next_line((const int)fd, &buf);
    printf("Ligne lue : %s\n", buf);
    printf("Retour GNL : %d\n", get_next_line((const int)fd, &buf));
  }
  else
    printf("Erreur");
  return (0);
}
