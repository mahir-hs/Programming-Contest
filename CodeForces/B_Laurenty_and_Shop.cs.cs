var n = int.Parse(Console.ReadLine() ?? "0");

var arr1 = Console.ReadLine()!.Split(' ').Select(int.Parse).ToArray();
var arr2 = Console.ReadLine()!.Split(' ').Select(int.Parse).ToArray();
var arr3 = Console.ReadLine()!.Split(' ').Select(int.Parse).ToArray();

var up = new int[n + 1];
var down = new int[n + 1];
for (var i = n - 1; i >= 0; i--)
{
    if (i == n - 1)
    {
        down[i] = 0;
        continue;
    }
    down[i] = down[i + 1] + arr2[i];
}

for (var i = 0; i < n; i++)
{
    if (i == 0)
    {
        up[i] = 0;
        continue;
    }
    up[i] = up[i - 1] + arr1[i - 1];
}

var ans = int.MaxValue;
for (var i = 0; i < n; i++)
{
    var now = up[i] + down[i] + arr3[i];
    for (var j = 0; j < n; j++)
    {
        if (i == j) continue;
        var temp = up[j] + arr3[j] + down[j];
        ans = Math.Min(ans, now + temp);
    }

}

Console.WriteLine(ans);
