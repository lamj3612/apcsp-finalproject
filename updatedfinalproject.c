#include <stdio.h>
#include <stdlib.h>
//justin
int main() 
{

  printf(" Hello! Welcome to the English Quiz! Get 4/5 questions correct to pass!\n\n\n\n");
        int score;
        int total = 0;
        char answer[50];
        char Y;
FILE*outFile;
 outFile = fopen("finalprojectoutput", "w");
  if (outFile == NULL) {
    printf("error - failed to open file for writing\n");
    return 1;      
}

                printf("Austin ran to the store and he bought some juice.");
printf("Should there be a comma before 'and'? Answer with (y/n)\n");
fprintf(outFile,"Austin ran to the store and he bought some juice.");
fprintf(outFile,"Should there be a comma before 'and'? Answer with (y/n)\n");
                scanf("%s",answer);
fprintf(outFile, "%s\n\n", answer);
    if (strcmp(answer, "y") == 0)   
    {
      total = total + 1;
      score = score + 1;
      printf("Correct\n");
      printf("Score = %d/%d\n\n ",score,total);

    }
    else
    {
      total = total + 1;       
      printf("Incorrect\n");
      printf("Score = %d/%d\n\n",score,total);

    }
      
      printf("Justin ____ comes to class early to make sure he is prepared for the class.\n");
      printf("Is it 'always' or 'all ways'\n");

fprintf(outFile,"Justin ____ comes to class early to make sure he is prepared for the class.\n");
      fprintf(outFile,"Is it 'always' or 'all ways'\n");
      scanf("%s",answer);
      fprintf(outFile, "%s\n\n", answer);
      if (strcmp(answer,"always") == 0)
      {
        total = total + 1;
        score = score + 1;
        printf("Way to go!\n");
        printf("Score = %d/%d\n\n ", score, total);


      }
      else
      { 
        total = total +1;
        printf("Ah Shoot! That's not it!\n");
        printf("Score = %d/%d\n\n", score, total);
      }

      printf("Tyler RAN to the basketball game.\n");
      printf("Is RAN present or past tense(answer with present or past)\n");
fprintf(outFile,"Tyler RAN to the basketball game.\n");
      fprintf(outFile,"Is RAN present or past tense(answer with present or past)\n");
      scanf("%s", answer);
      fprintf(outFile, "%s\n\n", answer);
      if (strcmp(answer, "past")==0)
      {
              total = total + 1;
        score = score + 1;
        printf("Nice job! You are on a roll.\n");
        printf("Score = %d/%d\n\n", score, total);
      }
      else 
      {
        total = total + 1;
        printf("Wrong! You can do this!\n");
        printf("Score = %d/%d\n\n", score, total);
      }

        printf("How many vowels are in Aaron?\n");
	fprintf(outFile, "How many vowels are in Aaron?\n");
        scanf("%s", answer);
	fprintf(outFile, "%s\n\n", answer);
       if(strcmp(answer, "3")==0)
        {
          total = total + 1;
          score = score + 1;
          printf("That is right!\n");
          printf("Score = %d/%d\n\n", score, total);
        }
      else
      {
          total = total + 1;
          printf("That is wrong! Don't Give Up!\n");
          printf("Score = %d/%d\n\n", score, total);
      }
      while (score >= 4)
      {
        printf("you already passed btw");
        break;

      }
      printf("\nHow awesome is this test?\n");
      printf("awesome or lame?\n");
 fprintf(outFile,"\nHow awesome is this test?\n");
     fprintf(outFile,"awesome or lame?\n");
      scanf("%s", answer);
	fprintf(outFile, "%s\n\n", answer);
      if(strcmp(answer, "awesome") == 0)
      {
        total = total + 1;
        score= score + 1;
        printf("you are awesome!\n");
        printf("Score = %d/%d\n\n", score, total);
      }
      else
      {
        total = total + 1;
        printf("wow! not cool!\n");
        printf("Score = %d/%d\n\n", score, total);
      }

      printf("\n\n congratulations! You have completed the test!\n\n\n");

      if (score >= 4 & total == 5)
{
      printf(" You have passed!");
}
      else
{
      printf("Unfortunately, You have failed!");
}
}
