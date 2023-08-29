#include <stdio.h>
#include <stdlib.h>

int main()
{

    // STRING IN C
        // declaring a string note: we don't a data type of string In C
            char name[10] = "Samuel";
            printf(name); // printing just name
            printf("\nHello %s", name); // print hello name


        // assigning values to string variable note: use strcpy(variable_name,"value"); to assign a value to a string
            // name = "Emma" will cause an error
            strcpy(name, "Emma");
            printf("\nHello %s ", name); // will not cause an error
    return 0;
}
