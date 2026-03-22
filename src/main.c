#include<stdio.h>
#include<stdlib.h>

struct student{
    int id;
    char name[50];
    char dept[50];
    float marks;
};

void menu(){
    printf("\n============== mini database system==============\n");
    printf("1. Add Record\n");
    printf("2. View Record\n");
    printf("3. Search Record\n");
    printf("4. Update Record\n");
    printf("5. Delete Record\n");
    printf("6. Exit\n");
    printf("Enter your choice:");
}

int main(){
    int choice;

    while(1){

        menu();
        scanf("%d", &choice);

        switch(choice){
            case 1:
               printf("Add Record Feature Coming Soon\n");
               break;
            
            case 2:
               printf("View Records Feature Coming Soon\n");
               break;
               
            case 3:
                printf("Search Feature Coming Soon\n");
                break;
                
            case 4:
                printf("Update Feature Coming Soon\n");
                break;
                
            case 5:
                printf("Delete Feature Coming Soon\n");
                break;
                
            case 6:
                printf("Exiting......\n");
                exit(0);
                
            default:
               printf("Invalid Choice\n");
                    
        }

    }

    return 0;
}