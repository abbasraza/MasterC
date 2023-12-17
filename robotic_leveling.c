#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>


char * solve(int claw_pos, int stacks, int boxes[stacks], bool box_in_claw)
{
    printf("claw_pos:%d boxes[claw_pos] %d box_in_claw %d \n", claw_pos, boxes[claw_pos], box_in_claw);
    static int direction = 0; // RIGHT
    int total_boxes = 0;
    for (int i = 0; i < stacks; i++)
    {
        total_boxes += boxes[i];
    }

    int boxes_per_stack = total_boxes / stacks + box_in_claw;

    if (claw_pos == stacks - 1)
        direction = 1;
    else if (claw_pos == 0)
        direction = 0;


    if (box_in_claw == false && boxes[claw_pos] > boxes_per_stack)
    {
        return "PICK";
    }

    if (boxes[claw_pos] < boxes_per_stack)
    {
        if (box_in_claw)
            return "PLACE";            
    }


    
    // if (boxes[claw_pos] == boxes_per_stack || box_in_claw)
    {
        if (direction == 0)
            return "RIGHT";
        if (direction == 1)
            return "LEFT";
    }



}

/* Ignore and do not change the code below */
int main()
{

    // game loop
    while (1) {
        int claw_pos;
        scanf("%d", &claw_pos);
        bool box_in_claw;
        int _box_in_claw;
        scanf("%d", &_box_in_claw);
        box_in_claw = _box_in_claw;
        int stacks;
        scanf("%d", &stacks);
        int boxes[stacks];
        for (int i = 0; i < stacks; i++)
        {
            scanf("%d", &boxes[i]);
        }
        int std_out_fd = dup(1);
        dup2(2, 1);
        char* action = solve(claw_pos, stacks, boxes, box_in_claw);
        dup2(std_out_fd, 1);
        printf("%s\n", action);
    }

    return 0;
}
/* Ignore and do not change the code above */