using System;

class Program
{
    const int MAX_SIZE_ARRAY = 50;
    static char[,] array = new char[MAX_SIZE_ARRAY, MAX_SIZE_ARRAY];
    static int N;
    static int max;

    static void Main()
    {
        N = int.Parse(Console.ReadLine());

        //입력
        for(int i = 0; i < N; i++)
        {
            var input = Console.ReadLine();
            for (int j = 0; j < N; j++)
            {
                array[i, j] = input[j];
            }
        }

        //행변경 시작 (오른쪽)
        // 바꾸고 탐색하고 다시 원래대로 원상복구 반복해야함!
        for(int i = 0;i < N; i++)
        {
            for(int j = 0; j < N-1; j++)
            {
                Swap(i, j, i, j + 1);
                LCS();
                Swap(i, j, i, j + 1);
            }
        }

        //열변경 시작 (아래)
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N-1; j++)
            {
                Swap(j, i, j + 1, i);
                LCS();
                Swap(j, i, j + 1, i);
            }
        }

        Console.WriteLine(max);
    }

    static void Swap(int x, int y, int i, int j)
    {
        var save = array[x,y];
        array[x,y] = array[i,j];
        array[i,j] = save;
    }

    static void LCS()
    {
        //가장 긴 수열 행-탐색
        for (int i = 0; i < N; i++)
        {
            int count = 1;
            for (int j = 0; j < N - 1; j++)
            {
                if (array[i,j] == array[i,j + 1])
                {
                    count++;
                    max = Math.Max(count, max);
                }
                else { count = 1; }
            }
        }

        //가장 긴 수열 열-탐색
        for (int i = 0; i < N; i++)
        {
            int count = 1;
            for (int j = 0; j < N - 1; j++)
            {
                if (array[j, i] == array[j+1, i])
                {
                    count++;
                    max = Math.Max(count, max);
                }
                else { count = 1; }
            }
        }
    }
}