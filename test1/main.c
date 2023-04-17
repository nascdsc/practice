#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
 {

    printf("HEY HEY !!\nThis is a summer project by \"JC\"\n\n\n\n");
    sleep(2);
    system("cls");
    printf("SINJIN Signing in~\n\nState your level of expertise in \"C\"Language:\nlvl(1):beginner\nlvl2(2):intermediate\nlvl3(3):master. you may test me!\n\n\n");
    int level;
    printf("1/2/3?\n");
    scanf("%d",&level);

    if(level==1){
        system("cls"); // system(""); -this is used to execute sys.c.

        printf("loading values for level %d players\n\n",level);\
        sleep(3);    // sleep(time); is used for delaying , in seconds.
        system("cls");

        printf("c is a middle level language\nwhich is used to design\n\n\t1.os\t2.games\n\nFirst developed in AT&T BEll labs\n\'c\'is a legendary one\n\n\n");
        sleep(5);


        printf("Heres how the basic structure looks like\n\n\n#include <stdio.h> //this one here is c library\n\nint main(){\n  printf(/'Hello World/');\n\n  return 0;\n\n\n}\n\n");
        sleep(5);

        printf("you can change the sentence inside the printf function\nand it will indeed display custom one.\n\n");
        printf("give it a try?:(type your phone number)\n\n");

        int pho;
        scanf("%d",&pho);
        printf("%d ?\nyes=1/no=0",pho);
        int henji;
        scanf("%d",&henji);

        if(henji=1){
            printf("#include <stdio.h>\n\nint main(){\n  printf(%d);\n\n  return 0;\n\n\n}",pho);
            sleep(2);
            printf("running this.");
            system("cls");
            printf("running this..");
            sleep(1);
            system("echo your number has been sent to the FBI");

        }else{
        printf("good");

        }


    }else if(level==2){
         system("cls");
     printf("loading values for level %d players\n\n",level);
      sleep(2);    // sleep(time); is used for delaying , in seconds.
        system("cls");
        printf("");
    }else{
         system("cls");
     printf("loading values for level %d players\n\n",level);
      sleep(2);    // sleep(time); is used for delaying , in seconds.
        system("cls");
    }

   return 0;
}
