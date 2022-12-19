#include <stdio.h>
#include <cs50.h>
#include <string.h>
void deletion (string delete, int test);
void addItem (int add, int length);
typedef struct
{
    string item_name;
    int price;
}
items;
items item [10];
int main (void)
{
    int length = 2;
    char continues;
    int choice = 0;
    item[0].item_name = "Baju";
    item[0].price = 20000;
    item[1].item_name = "Celana";
    item[1].price = 15000;
    do
    {
        printf("1. See item\n");
        printf("2. Add item\n");
        printf("3. Delete Item\n");
        printf("4. Exit\n");
        choice = get_int("What should we do today? ");
        if(choice == 1)
        {
            for(int i = 0; i < length; i++)
            {
                printf("%s || price: %i\n", item[i].item_name, item[i].price);
            }
        }
        else if(choice == 2)
        {
            int item_add = get_int("How many item you want to add: ");
            // call add item function
            addItem(item_add, length);
            // we += item add length to update the length size so the other function will loop without displaying null or not displaying all item
            length += item_add;
            for(int i = 0; i < length; i++)
            {
                printf("%s || price: %i\n", item[i].item_name, item[i].price);
            }
        }
        else if(choice == 3)
        {
            for(int i = 0; i < length; i++)
            {
                printf("%s || price: %i\n", item[i].item_name, item[i].price);
            }
            string delete = get_string("What item you want to delete? ");
            deletion(delete, length);
            printf("item Succesfully Deleted\n");
            // we -- item add length to update the length size so the other function will loop without displaying null or not displaying all item
            length--;
        }
        else if(choice >= 4)
        {
            printf("Thank You For Using This Service\n");
            return 1;
        }
        printf("Thank You For Using This Service. Continue (Y/N): ");
        scanf(" %c", &continues);
    }while(continues == 'Y' || continues == 'y');
}
void deletion (string delete, int length)
{
    int index_delete = 0;
    for(int i = 0; i < length; i++)
    {
        if(strcmp(delete, item[i].item_name) == 0)
        {
            index_delete = i;
        }
    }
    for(int i = index_delete; i < length; i++)
    {
        item[i].item_name = item[i+1].item_name;
        item[i].price = item[i+1].price;
    }
}
void addItem (int add, int length)
{
// add item, i = length so we start adding item at the end of length, so if there's 2 item, the i will start at 2 (the item is stored at index 0, and 1)
// length + add, e.g the user want to add 2 item, then the length of the array will be +2 in size
    for(int i = length; i < length+add; i++)
    {
        string item_nametemp = get_string("Item Name: ");
        int price_temp = get_int("Item Price: ");
        item[i].item_name = item_nametemp;
        item[i].price = price_temp;
    }
}
