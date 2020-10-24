/*
HackerLand University has the following grading policy:

Every student receives a grade in the inclusive range from 0 to 100.
Any grade less than 40 is a failing grade.


Sam is a professor at the university and likes to round each student's grade according to these rules:

If the difference between the grade and the next multiple of 5 is less than 3, round grade up to the next multiple of 5.
If the value of grade is less than 38, no rounding occurs as the result will still be a failing grade.

Examples

grade = 84 round to 85 (85 - 84 is less than 3)
grade = 29 do not round (result is less than 40)
grade = 57 do not round (60 - 57 is 3 or higher)
Given the initial value of grade for each of Sam's n students, write code to automate the rounding process.


Function Description

Complete the function gradingStudents in the editor below.

gradingStudents has the following parameter(s):

int grades[n]: the grades before rounding

Returns

int[n]: the grades after rounding as appropriate

Input Format

The first line contains a single integer, n, the number of students.
Each line i of the n subsequent lines contains a single integer, grade[i].


Constraints

1 <= n <= 60
0 <= grades[i] <= 100

Sample Input 0

4
73
67
38
33

Sample Output 0

75
67
40
33

Explanation 0

ID: 1, input = 73, output = 75
ID: 2, input = 67, output = 67
ID: 3, input = 38, output = 40
ID: 4, input = 33, output = 33


Student 1 received a 75, and the next multiple of 5 from 73 is 75. Since 75-73 < 3, the student's grade is rounded to 75.

Student 2 received a 67, and the next multiple of 5 from 67 is 70. Since 70-67 = 3, the grade will not be modified and the student's final grade is 67.

Student 3 received a 38, and the next multiple of 5 from 38 is 40. Since 40-38 < 3, the student's grade is rounded to 40.

Student 4 received a 33, so the grade will not be modified and the student's final grade is 33.
*/

import Foundation

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

func gradingStudents(grades: [Int]) -> [Int] {
    return grades.map{
      let m5 = $0 + (5 - $0 % 5)
      return ($0 >= 38 && (m5 - $0) < 3) ? m5 : $0
    }
}

let stdout = ProcessInfo.processInfo.environment["OUTPUT_PATH"]!
FileManager.default.createFile(atPath: stdout, contents: nil, attributes: nil)
let fileHandle = FileHandle(forWritingAtPath: stdout)!

guard let gradesCount = Int((readLine()?.trimmingCharacters(in: .whitespacesAndNewlines))!)
else { fatalError("Bad input") }

var grades = [Int]()

for _ in 1...gradesCount {
    guard let gradesItem = Int((readLine()?.trimmingCharacters(in: .whitespacesAndNewlines))!)
    else { fatalError("Bad input") }

    grades.append(gradesItem)
}

guard grades.count == gradesCount else { fatalError("Bad input") }

let result = gradingStudents(grades: grades)

fileHandle.write(result.map{ String($0) }.joined(separator: "\n").data(using: .utf8)!)
fileHandle.write("\n".data(using: .utf8)!)


/* Tests cases

Test0
Input (stdin)
4
73
67
38
33

Expected Output
75
67
40
33


Test1
Input (stdin)
2
37
38

Expected Output
37
40


Test2
Input (stdin)
23
80
96
18
73
78
60
60
15
45
15
10
5
46
87
33
60
14
71
65
2
5
97
0

Expected Output
80
96
18
75
80
60
60
15
45
15
10
5
46
87
33
60
14
71
65
2
5
97
0

Test3
Input (stdin)
44
84
94
21
0
18
100
18
62
30
61
53
0
43
2
29
53
61
40
14
4
29
98
37
23
46
9
79
62
20
38
51
99
59
47
4
86
61
68
17
45
6
1
95
95

Expected Output
85
95
21
0
18
100
18
62
30
61
55
0
45
2
29
55
61
40
14
4
29
100
37
23
46
9
80
62
20
40
51
100
60
47
4
86
61
70
17
45
6
1
95
95

Test4
Input (stdin)
57
97
56
81
38
30
1
9
23
69
24
44
69
12
61
50
84
3
17
91
39
26
18
66
76
31
42
52
21
55
57
18
3
97
85
78
45
94
39
90
93
60
73
93
32
8
57
19
52
4
97
32
85
39
75
27
54
0

Expected Output
97
56
81
40
30
1
9
23
70
24
45
70
12
61
50
85
3
17
91
40
26
18
66
76
31
42
52
21
55
57
18
3
97
85
80
45
95
40
90
95
60
75
95
32
8
57
19
52
4
97
32
85
40
75
27
55
0


Test5
Input (stdin)
50
59
36
97
28
61
54
27
14
29
81
16
7
1
99
42
77
39
20
29
0
1
82
20
71
71
73
79
77
61
7
93
36
65
11
92
87
85
62
45
33
9
6
37
31
67
32
67
73
59
95

Expected Output
60
36
97
28
61
55
27
14
29
81
16
7
1
100
42
77
40
20
29
0
1
82
20
71
71
75
80
77
61
7
95
36
65
11
92
87
85
62
45
33
9
6
37
31
67
32
67
75
60
95

Test6
Input (stdin)
39
27
89
56
47
38
12
98
72
85
76
72
56
23
77
25
49
4
52
71
43
11
2
44
10
20
3
90
64
48
31
56
51
70
91
14
25
61
41
0

Expected Output
27
90
56
47
40
12
100
72
85
76
72
56
23
77
25
50
4
52
71
45
11
2
45
10
20
3
90
65
50
31
56
51
70
91
14
25
61
41
0
*/

