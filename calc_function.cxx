double calc(char operand, double x, double y)
{
    switch(operand)
    {
        case '+':
            return (x + y);
            break;
        case '-':
            return (x - y);
            break;
        case '*':
            return (x * y);
            break;
        case '/':
            if (y != 0)
            {
                return (x / y);
            }
            else
            {
                return 0;
            }
            break;
        case '^':
            double result = 1;

            for (int32 i = 0; i < y; i++)
            {
                result *= x;
            }
            
            break;
    }
}
