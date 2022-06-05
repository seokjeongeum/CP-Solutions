fun main(args: Array<String>) {
    val (n, m, k) = readLine()!!.split(' ').map(String::toInt)
    val a = readLine()!!.split(' ').map(String::toInt)
    var left = 0
    var right = n - 1
    while (left <= right) {
        val middle = (left + right) / 2
        var boxes = 1
        var currentBox = 0
        for (i in middle until n) {
            if (currentBox + a[i] > k) {
                ++boxes
                currentBox = 0
            }
            currentBox += a[i]
        }
        if (boxes <= m) {
            right = middle - 1
        } else {
            left = middle + 1
        }
    }
    println(n - left)
}