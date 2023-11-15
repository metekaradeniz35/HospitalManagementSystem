#include <stdio.h>


struct Human{
  char name[50];
  int health;
  int age;
  int id;
};

struct Bed{
  int height;
  int width;
};


void hospData(){
  int option,option2,needBed;
  printf("\t\tWhich hospital do you want to manage?\n");
  printf("\t\t1.France Hospital\n");
  printf("\t\t2.Germany Hospital\n");
  printf("\t\t3.Turkey Hospital\n");
  printf("\t\tOption: ");
  scanf("%d",&option);
  switch (option) {
    case 1:
      printf("\t\tWhich one do you want to do to France Hospital?\n");
      printf("\t\t1. Add Patient\n");
      printf("\t\t2. Add Bed\n");
      printf("\t\tOption: ");
      scanf("%d",&option2);
      if(option2 == 1){
        struct Human human1;
        printf("\t\tEnter the patient name: ");
        scanf("%s",&human1.name);
        printf("\n\t\tEnter the health condition between 1-100: ");
        scanf("%d",&human1.health);
        printf("\n\t\tEnter the age of the patient: ");
        scanf("%d",&human1.age);
        printf("\n\t\tEnter the id of the patient: ");
        scanf("%d",&human1.id);
        if(human1.health  > 60){
          printf("\t\tPatient is healthy and we can't give a bed for patient\n");
        } else if(human1.health < 60){
          printf("\t\tPatient needs to stay at the hospital we can give a bed for patient\n");
          FILE *nameFile = fopen("nameFrance.txt", "w");
          fprintf(nameFile, "%d\n", human1.id);
        } else if(human1.health < 10) {
          printf("\t\tThe patient needs to be taken to intensive care\n");
        } else if(human1.health < 5){
          printf("\t\tThe patient is dead");
        }
      } else if(option2 == 2){
        struct Bed bed1;
          printf("\t\tEnter the height of the bed: ");
          scanf("%d",&bed1.height);
          printf("\t\tEnter the width of the bed: ");
          scanf("%d",&bed1.width);
          printf("\t\t%d*%d sized bed given to the France",bed1.height, bed1.width);

      } else {
        printf("\t\tWrong option!");
      }
      break;
    case 2:
    printf("\t\tWhich one do you want to do to Germany Hospital?\n");
    printf("\t\t1. Add Patient\n");
    printf("\t\t2. Add Bed\n");
    printf("\t\tOption: ");
    scanf("%d",&option2);
    if(option2 == 1){
      struct Human human2;
      printf("\t\tEnter the patient name: ");
      scanf("%s",&human2.name);
      printf("\n\t\tEnter the health condition between 1-100: ");
      scanf("%d",&human2.health);
      printf("\n\t\tEnter the age of the patient: ");
      scanf("%d",&human2.age);
      printf("\n\t\tEnter the id of the patient: ");
      scanf("%d",&human2.id);
      if(human2.health  > 60){
        printf("\t\tPatient is healthy and we can't give a bed for patient\n");
      } else if(human2.health < 60){
        printf("\t\tPatient needs to stay at the hospital we can give a bed for patient\n");
        FILE *nameFile2 = fopen("nameGermany.txt", "w");
        fprintf(nameFile2, "%d\n", human2.id);
      } else if(human2.health < 10) {
        printf("\t\tThe patient needs to be taken to intensive care\n");
      } else if(human2.health < 5){
        printf("\t\tThe patient is dead");
      }

  }else if(option2 == 2){
    struct Bed bed2;
      printf("\t\tEnter the height of the bed: ");
      scanf("%d",&bed2.height);
      printf("\t\tEnter the width of the bed: ");
      scanf("%d",&bed2.width);
      printf("\t\t%d*%d sized bed given to the Germany",bed2.height, bed2.width);

  } else {
    printf("\t\tWrong option!");
  }
  break;

  case 3:
  printf("\t\tWhich one do you want to do to Turkey Hospital?\n");
  printf("\t\t1. Add Patient\n");
  printf("\t\t2. Add Bed\n");
  printf("\t\tOption: ");
  scanf("%d",&option2);
  if(option2 == 1){
    struct Human human3;
    printf("\t\tEnter the patient name: ");
    scanf("%s",&human3.name);
    printf("\n\t\tEnter the health condition between 1-100: ");
    scanf("%d",&human3.health);
    printf("\n\t\tEnter the age of the patient: ");
    scanf("%d",&human3.age);
    printf("\n\t\tEnter the id of the patient: ");
    scanf("%d",&human3.id);
    if(human3.health  > 60){
      printf("\t\tPatient is healthy and we can't give a bed for patient\n");
    } else if(human3.health < 60){
      printf("\t\tPatient needs to stay at the hospital we can give a bed for patient\n");
      FILE *nameFile3 = fopen("nameTurkey.txt", "w");
      fprintf(nameFile3, "%d\n", human3.id);
    } else if(human3.health < 10) {
      printf("\t\tThe patient needs to be taken to intensive care\n");
    } else if(human3.health < 5){
      printf("\t\tThe patient is dead");
    }

}else if(option2 == 2){
  struct Bed bed3;
    printf("\t\tEnter the height of the bed: ");
    scanf("%d",&bed3.height);
    printf("\t\tEnter the width of the bed: ");
    scanf("%d",&bed3.width);
    printf("\t\t%d*%d sized bed given to the Turkey",bed3.height, bed3.width);

} else {
  printf("\t\tWrong option!");
}
break;

  }

}

void sortHospName() {
  printf("\t\tEurope\t\tAsia\n");
  printf("\t\tFrance H.\tTurkey H.\n");
  printf("\t\tGermany H.");
}

void sortHospPrice() {
  int option;
  printf("\t\tWhich hospital do you want to see the price.\n");
  printf("\t\t1.France H.\n");
  printf("\t\t2.Germany H.\n");
  printf("\t\t3.Turkey H.\n");
  printf("\t\tOption: ");
  scanf("%d",&option);
  switch(option){
    case 1:
    printf("\t\tPrice of a session is 100 euro and rest 1 day is 250€\n");
      break;
    case 2:
      printf("\t\tPrice of a session is 70 euro  and rest 1 day is 150 euro\n");
        break;
    case 3:
        printf("\t\tPrice of a session is 1000 TL and rest 1 day is 2000 TL\n");
          break;
  }
  printf("\t\tCheapest hospital is Turkey Hospital\n");
  printf("\t\tMost expensive hospital is France Hospital\n");

}

void printHospital() {
  int option;
  printf("t\tWhich hospital do you want to see the city?\n");
  printf("\t\t1.France H.\n");
  printf("\t\t2.Germany H.\n");
  printf("\t\t3.Turkey H.\n");
  printf("\t\tOption: ");
  scanf("%d",&option);
  switch (option) {
    case 1:
    printf("\t\tFrance Hospital is located in Paris\n");
      break;
    case 2:
      printf("\t\tGermany Hospital is located in Berlin\n");
        break;
    case 3:
        printf("\t\tTurkey Hospital is located in Istanbul\n");
          break;
  }
}



int main() {
  int option;
  printf("\t\tHospital Management System\n");
  printf("\t\tWhat do you want to do?\n");
  printf("\t\t1.Search Hospital Data\n");
  printf("\t\t2.Sort Hospital by Name\n");
  printf("\t\t3.Sort Hospital by Price\n");
  printf("\t\t4. Look for the specific city of hospital\n");
  printf("\t\tOption: ");
  scanf("%d",&option);
  switch (option) {
    case 1:
    hospData();
      break;
    case 2:
    sortHospName();
      break;
    case 3:
    sortHospPrice();
      break;
    case 4:
    printHospital();
      break;
    default:
      printf("\t\tWrong option");
      break;
  }
}
