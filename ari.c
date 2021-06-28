char* ari (char* s)
{
  int characters = 0;
  int words = 0;
  int sentences = 0;
  float score;
  int r;
  int f;
  int c;
  for (int i = 0; i < strlen (s); i++)
    {
      if (isalnum (s[i]))
	{
	  characters++;
	}
      else if (s[i] == ' ')
	{
	  words++;
	}
      else if (s[i] == '.' || s[i] == '?' || s[i] == '!')
	{
	  sentences++;
	}
    }
  score =
    (4.71 * (float) characters / (float) words) +
    (0.5 * (float) words / (float) sentences) - 21.43;
  f = (int) score;
  c = f + 1;
  r = c;
  if (r == 1)
    {
      return "Kindergarten";
    }
  else if (r == 2)
    {
      return "First/Second Grade";
    }
  else if (r == 3)
    {
      return "Third Grade";
    }
  else if (r == 4)
    {
      return "Fourth Grade";
    }
  else if (r == 5)
    {
      return "Fifth Grade";
    }
  else if (r == 6)
    {
      return "Sixth Grade";
    }
  else if (r == 7)
    {
      return "Seventh Grade";
    }
  else if (r == 8)
    {
      return "Eigth Grade";
    }
  else if (r == 9)
    {
      return "Ninth Grade";
    }
  else if (r == 10)
    {
      return "Tenth Grade";
    }
  else if (r == 11)
    {
      return "Eleventh Grade";
    }
  else if (r == 12)
    {
      return "Twelfth Grade";
    }
  else if (r == 13)
    {
      return "College Student";
    }
  else if (r == 14)
    {
      return "Professor";
    }
}
