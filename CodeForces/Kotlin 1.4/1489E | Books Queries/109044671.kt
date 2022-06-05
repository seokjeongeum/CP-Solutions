import kotlin.math.min
 
fun main(args: Array<String>) {
    var q = readLine()!!.toInt()
    var l = 0
    var r = 0
    val ls = IntArray(200001)
    val rs = IntArray(200001)
    val cs = CharArray(200001)
    while (q > 0) {
        val s = readLine()!!.split(' ')
        val c = s[0].single()
        val id = s[1].toInt()
        if (c == 'L' || c == 'R') {
            if (c == 'L') {
                ++l
            }
            if (c == 'R') {
                ++r
            }
            ls[id] = l
            rs[id] = r
            cs[id] = c
        } else {
            if (cs[id] == 'L') {
                println("${min(l - ls[id], ls[id] + r - 1)}")
            }
            if (cs[id] == 'R') {
                println("${min(rs[id] + l - 1, r - rs[id])}")
            }
        }
        --q
    }
}