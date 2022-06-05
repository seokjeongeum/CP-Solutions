fun main(args: Array<String>) {
    var q = readLine()!!.toInt()
    while (q > 0) {
        val (n, a, b) = readLine()!!.split(' ').map(String::toLong)
        if (2 * a > b) {
            print("${n / 2 * b + n % 2 * a} ")
        } else {
            print("${n * a} ")
        }
        --q
    }
}