#include <stdio.h>
#include <stdlib.h>



struct Contact{
char name[50];
char email[50];
char phone_num[50];
};
int no_of_contact=0;
 struct Contact* add_Contact(struct Contact*contact){
     if(no_of_contact==0){
        contact=malloc((no_of_contact+1)*sizeof(struct Contact));

     }
     else{
        contact=realloc(contact,(no_of_contact+1)*sizeof(struct Contact));

     }
     if (contact == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    printf("Enter name:");
    scanf("%s",contact[no_of_contact].name);
    printf("Enter email:");
    scanf("%s",contact[no_of_contact].email);
    printf("Enter phone number:");
    scanf("%s",contact[no_of_contact].phone_num);
    no_of_contact++;
    return contact;
}
void display_contact(struct Contact*contact){
    for(int i=0;i<no_of_contact;i++){
        printf("Name: %s\n",contact[i].name);
        printf("Email: %s\n",contact[i].email);
        printf("Phone Number: %s\n",contact[i].phone_num);
        printf("\n\n");
    }
}
void delete_contact(struct Contact*contact,int index){
    if(index<0|| index>=no_of_contact){
        printf("Invalid Index");
    }
    for(int i=index;i<no_of_contact-1;i--){
        contact[i]=contact[i+1];
    }
    no_of_contact--;
    contact=realloc(contact,(no_of_contact+1)*sizeof(struct Contact));
}
int main(){
    struct Contact *contact;
    int exit=1;
    while(exit){
    int choice;
    int index_to_dlt;

    printf("What you want do do?\n1.Add Contact\n2.Display Contact\n3.Delete Contact\n4.Exit\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        contact=add_Contact(contact);
        break;
    case 2:
        display_contact(contact);
        break;
    case 3:
        printf("Enter the index of contact which you want to delete:");
        scanf("%d",&index_to_dlt);
        delete_contact(contact,index_to_dlt);
        break;
    case 4:
        free(contact);
        exit=0;
        break;

    default:
        printf("Invalid choice. Please enter a valid option.\n");
    }
    }
return 0;
}
