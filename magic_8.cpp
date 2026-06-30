/******************************************************************************
 **                                                                          **
 ** The Not so Magic 8 Ball								                     **
 ** It's a nifty little utilty to answer life's most difficult		   		 **
 ** Questions, in a yes, no or maybe format. Enjoy!                          **
 **                                                                          **
 ** This is no way affilated with Mattel, or any other 8 balls.		         **
 **     <email@example.com>                                                  **
 **                                                                          **
 ******************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <ctime>

char answers[20][26] = {
	"As I see it, yes",
	"It is certain",
	"It is decidedly so",
	"Most likely",
	"Outlook good",
	"Signs point to yes",
	"Without a doubt",
	"Yes",
	"Yes - definitely",
	"You may rely on it",
	"Reply hazy, try again",
	"Ask again later",
	"Better not tell you now",
	"Cannot predict now",
	"Concentrate and ask again",
	"Don't count on it",
	"My reply is no",
	"My sources say no",
	"Outlook not so good",
	"Very doubtful"};
/*Generally 10 answers are yes, 5 maybe and 5 no. Meaning it's has 50% chance of answering yes,
and 25% chance or either maybe or no. Sourced from of course - Wikipedia*/

int main()
{
	int intAnswer, charExit;
	do {
		fflush(stdin);
		srand(time(NULL));
		printf("Ask a question to the magic Eight Ball: \n");
		getchar();

		intAnswer = (rand() % 19);
		printf("%s", answers[intAnswer]);
		fflush(stdin);
		getchar();

		printf("\nDo you have another question? ");
		charExit = getchar();
	} while (charExit == 'y'||charExit == 'Y');
	return 0;
}