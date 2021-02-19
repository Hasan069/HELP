#include <stdio.h>

int Add_info()
{
    char name[30];
    FILE *fptr;
    int id;

    float intake, section;
    fptr = fopen("emp.txt", "w");
    if (fptr == NULL)
    {
        printf("File does not exists \n");
    }
    printf("Enter the name \n");
    scanf("%s", name);
    fprintf(fptr, "Name= %s\n", name);
    fclose(fptr);

    FILE *fp;
    char buff[255];
    fp = fopen("emp.txt", "r");
    while (fscanf(fp, "%s", buff) != EOF)
    {
        printf("%s ", buff);
    }
    fclose(fp);
}

void show_list()
{
    FILE *fp;
    char buff[255];
    fp = fopen("emp.txt", "r");
    while (fscanf(fp, "%s", buff) != EOF)
    {
        printf("%s \n", buff);
    }
    fclose(fp);
}
void Update_product()
{
}

void Add_product()
{
}
void Change_or_remove_product()
{
}

void Totalsale()
{
}

void Add_offer()
{
}

void show_complain()
{
}

int Main_menu()
{
    printf("Train Schedule OF THE PROJECT: \n");
    printf("1. ADD product\n");
    printf("2. Show List \n");
    printf("3. Update product\n");
    printf("4. Delete product\n");

    int ch;
    printf("Enter your Choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        Add_info();
        break;
    case 2:
        show_list();
        break;
    case 3:
        Change_or_remove_product();
        break;
    case 4:
        Totalsale();
        break;
    case 5:
        show_complain();
        break;

    default:
        printf("Wrong Input\n");
    }
}

void User()
{
    printf("***USER PANEL**\n");
    printf("\n**Main Menu**\n");
    printf("1. Add product \n");
    printf("2. Remove product ");
    printf("3. Show list");
    printf("4. Send Complain. \n");
    printf("5. Emergency Contact \n");
    printf("6. Exit \n");
}

int Admin()
{
    printf("*****ADMIN PANEL*****\n");
    printf("***Main Menu*** \n");
    printf("1. Add product \n");
    printf("2. Change or remove product. \n");
    printf("3. Total Sale. \n");
    printf("4. Add offer.\n");
    printf("5. Show Complain. \n");
    printf("6. Emergency Contact \n");
    printf("7. Exit \n");

    int ch;
    printf("Enter your Choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        Main_menu();
        break;
    case 2:
        Add_product();
        break;
    case 3:
        Change_or_remove_product();
        break;
    case 4:
        Totalsale();
        break;
    case 5:
        Add_offer();
        break;
    case 6:
        show_complain();
        break;
    
    default:
        printf("Wrong Input\n");
    }
}

int main()
{
    printf("1. USER LOGIN\n");
    printf("2. ADMIN LOGIN\n");
    int ch;
    printf("Enter Your Choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        User();
        break;
    case 2:
        Admin();
        break;

    default:
        printf("Wrong Input\n");
    }

    return 0;
}
