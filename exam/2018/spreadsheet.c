#include <stdio.h>
#include <stdlib.h>

typedef struct _sheet {
    char    **cells;
    char    *cell;
} SHEET;

SHEET new_sheet()
{
    SHEET sheet;
    sheet.cells = NULL;

    return sheet;
}

int main(int argc, char **argv)
{
    SHEET sheet = new_sheet();
    
    *sheet.cell = "ass";
    return 0;
}