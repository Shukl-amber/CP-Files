cin >> n;
    for (int i = 0; i <= 10; i++)
    {
        if (n<0)
        {
            if (i%2==0)
            {
                cout << "false";
            }
            else
            {
                cout << "true";
            }          
            return 0;
        }
        n=n-(10-i);
    }