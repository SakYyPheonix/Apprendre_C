void swapFloat(float *num1, float *num2)
{
    float *tempon;
    tempon = (float *)malloc(sizeof(float));
    tempon = num1;
    num1 = num2;
    num2 = tempon;
}

