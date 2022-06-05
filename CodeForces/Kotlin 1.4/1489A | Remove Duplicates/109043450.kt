fun main(args: Array<String>) {
    val n = readLine()!!.toInt()
    val a = readLine()!!.split(' ').map(String::toInt)
    val r = mutableListOf<Int>()
    for (i in (n - 1) downTo 0) {
        if (!r.contains(a[i])) {
            r.add(0, a[i])
        }
    }
    println(r.size)
    for (i in r) {
        print("$i ")
    }
}