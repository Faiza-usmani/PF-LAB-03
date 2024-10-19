#include <stdio.h>

int main()
{
    int nts, fsc;

    printf("Enter you F.sc marks: ");
    scanf("%d", &fsc);
    printf("Enter you NTS marks: ");
    scanf("%d", &nts);

    if (fsc > 70 && nts >= 70)
        printf("You got admssion in IT department in harvard");
    else if (fsc > 70 && nts >= 60)
        printf("You got admssion in Electronics department in harvard");
    else if (fsc > 70 && nts >= 50)
        printf("You got admssion in Telecomunication department inharvard");
    else if ((fsc >= 60 && fsc <= 70) && nts >= 50)
        printf("You got admssion in IT department in MIT");
    else if ((fsc >= 50 && fsc <= 59) && nts >= 50)
        printf("You got admssion in Chemical department in MIT");
    else if ((fsc > 40 && fsc < 50) && nts >= 50)
        printf("You got admssion in Chemical department in MIT");
    else
        printf("Sorry. You do not get admission in Harvard or MIT.");

    return 0;
}
