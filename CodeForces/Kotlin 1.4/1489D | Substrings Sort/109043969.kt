fun main(args: Array<String>) {
    val n = readLine()!!.toInt()
    val list = mutableListOf<String>()
    for (i in 0 until n) {
        list.add(readLine()!!)
    }
    list.sortWith { o1, o2 -> o1.length - o2.length }
    var b = true
    for (i in 0 until n - 1) {
        b = b && list[i + 1].contains(list[i])
    }
    if (b) {
        println("YES")
        for (s in list) {
            println(s)
        }
    } else {
        println("NO")
    }
}