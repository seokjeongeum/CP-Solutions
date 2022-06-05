fun main(args: Array<String>) {
    val n = readLine()!!.toInt()
    val s = readLine()!!
    var xInARow = 0
    var r = 0
    for (c in s) {
        if (c == 'x') {
            ++xInARow
        } else {
            r += (xInARow - 2).coerceAtLeast(0)
            xInARow = 0
        }
    }
    r += (xInARow - 2).coerceAtLeast(0)
    println(r)
}