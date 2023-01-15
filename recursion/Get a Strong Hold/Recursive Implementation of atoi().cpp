class Solution
{
private:
    void convert(string str, int i, int &result)
    {
        if (i == str.size())
        {
            return;
        }
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            result = -1;
            return;
        }
        result = result * 10 + (str[i] - '0');
        convert(str, i + 1, result);
    }

public:
    /*You are required to complete this method */
    int atoi(string str)
    {
        // Your code here
        int sign = 1, i = 0;
        if (str[0] == '-')
        {
            sign = -1;
            i = 1;
        }
        else if (str[0] > '9')
        {
            return -1;
        }

        int result = 0;
        convert(str, i, result);
        return result != -1 ? result * sign : -1;
    }
};