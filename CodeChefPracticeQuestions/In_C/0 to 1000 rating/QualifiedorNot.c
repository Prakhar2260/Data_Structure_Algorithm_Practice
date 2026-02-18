int N, X, Y;
    
    scanf("%d %d %d", &N, &X, &Y);
    
    if (N >= 2 * X && N >= 2 * Y)
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
