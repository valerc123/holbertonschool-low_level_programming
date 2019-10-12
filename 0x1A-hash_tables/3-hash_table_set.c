

/*
 * str_cmp() - Compare two strings to determine if they are identical. Ensures
 * that each char in the strings are the same, and that they are of the same
 * length.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Zero if the strings are identical, one otherwise.
 */
int str_cmp(char *s1, char *s2)
{
	int i;
	int j = 0;

        for (i = 0; s1[i] != '\0'; ++i) {
		if (s1[j] != s2[j] || s1[j + 1] != s2[j + 1]) {
			return 1;
		}
		j++;
	}
	return 0;
}
