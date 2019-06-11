#include <stdio.h>
#include <stdlib.h>

int main()
{

  printf("Hello! Welcome to the Math Quiz! Get 4/5 questions to pass!\n\n\n\n");
  int score;
  int total = 0;
  char answer[50];
FILE*outFile;
 outFile = fopen("mathquizoutput", "w");
  if (outFile == NULL) {
  printf("error - failed to open file for writing\n");
  return 1;
  }
    printf("2x=18");
    printf("Does X equal 9? Answer with (y/n)\n");
    
    fprintf(outFile,"2x=18");
    fprintf(outFile, "Does X equal 9? Answer with (y/n)\n");
    scanf("%s",answer);
    fprintf(outFile, "%s\n\n", answer);
    if (strcmp(answer,"y") == 0)
{
  total = total + 1;
  score = score + 1;
  printf("Correct\n");
  printf("Score = %d/%d\n\n ",score,total);
}
else 
{
  total = total +1;
  printf("Incorrect\n");
  printf("Score = %d/%d\n\n",score,total);
}

printf("2x+1=19");
    printf("Does X equal 9? Answer with (y/n)\n");
fprintf(outFile,"2x+1=19");
    fprintf(outFile,"Does X equal 9? Answer with (y/n)\n");
    scanf("%s",answer);
    fprintf(outFile, "%s\n\n", answer);
    if (strcmp(answer,"y") == 0)
{
  total = total + 1;
  score = score + 1;
  printf("Correct\n");
  printf("Score = %d/%d\n\n ",score,total);
}
else 
{
  total = total +1;
  printf("Incorrect\n");
  printf("Score = %d/%d\n\n",score,total);
}

printf("3x=18");
    printf("Does X equal 6? Answer with (y/n)\n");

fprintf(outFile,"3x=18");
    fprintf(outFile,"Does X equal 6? Answer with (y/n)\n");
    scanf("%s",answer);
    fprintf(outFile, "%s\n\n", answer);
    if (strcmp(answer,"y") == 0)
{
  total = total + 1;
  score = score + 1;
  printf("Correct\n");
  printf("Score = %d/%d\n\n ",score,total);
}
else 
{
  total = total +1;
  printf("Incorrect\n");
  printf("Score = %d/%d\n\n",score,total);
}

printf("4x=20");
    printf("Does X equal 5? Answer with (y/n)\n");
fprintf(outFile,"4x=20");
    fprintf(outFile,"Does X equal 5? Answer with (y/n)\n");
    scanf("%s",answer);
    fprintf(outFile, "%s\n\n", answer);
    if (strcmp(answer,"y") == 0)
{
  total = total + 1;
  score = score + 1;
  printf("Correct\n");
  printf("Score = %d/%d\n\n ",score,total);
}
else 
{
  total = total +1;
  printf("Incorrect\n");
  printf("Score = %d/%d\n\n",score,total);
}
 while (total >= 4)
      {
        printf("You only have two questions left.");
        break;

      }


printf("12x=144");
    printf("Does X equal 12? Answer with (y/n)\n");

fprintf(outFile,"12x=144");
    fprintf(outFile,"Does X equal 12? Answer with (y/n)\n");
    scanf("%s",answer);
    fprintf(outFile, "%s\n\n", answer);
    if (strcmp(answer,"y") == 0)
{
  total = total + 1;
  score = score + 1;
  printf("Correct\n");
  printf("Score = %d/%d\n\n ",score,total);
}
else 
{
  total = total +1;
  printf("Incorrect\n");
  printf("Score = %d/%d\n\n",score,total);
}
}

