int main()
{
        Stack stack;
        init(&stack);

        char opcode[10];
        int value;

        while (1) 
        {
        scanf("%s", opcode);    
        if (strcmp(opcode, "push") == 0)
        {
                if (scanf("%d", &value) != 1) 
                {
                printf("Error: usage: push integer\n");
                exit(EXIT_FAILURE);
                }
                push(&stack, value);
        }
        else if (strcmp(opcode, "pall") == 0) 
        {
                pall(&stack);
        }
        else
        {
                printf("Unknown opcode: %s\n", opcode);
                exit(EXIT_FAILURE);
        }
        }

        return(0);
}
