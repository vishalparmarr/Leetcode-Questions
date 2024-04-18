<h2><a href="https://leetcode.com/problems/baseball-game/">682. Baseball Game</a></h2><h3>Easy</h3><hr><div><p>You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.</p>

<p>You are given a list of strings <code>operations</code>, where <code>operations[i]</code> is the <code>i<sup>th</sup></code> operation you must apply to the record and is one of the following:</p>

<ul>
	<li>An integer <code>x</code>.

	<ul>
		<li>Record a new score of <code>x</code>.</li>
	</ul>
	</li>
	<li><code>'+'</code>.
	<ul>
		<li>Record a new score that is the sum of the previous two scores.</li>
	</ul>
	</li>
	<li><code>'D'</code>.
	<ul>
		<li>Record a new score that is the double of the previous score.</li>
	</ul>
	</li>
	<li><code>'C'</code>.
	<ul>
		<li>Invalidate the previous score, removing it from the record.</li>
	</ul>
	</li>
</ul>

<p>Return <em>the sum of all the scores on the record after applying all the operations</em>.</p>

<p>The test cases are generated such that the answer and all intermediate calculations fit in a <strong>32-bit</strong> integer and that all operations are valid.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> ops = ["5","2","C","D","+"]
<strong>Output:</strong> 30
<strong>Explanation:</strong>
"5" - Add 5 to the record, record is now [5].
"2" - Add 2 to the record, record is now [5, 2].
"C" - Invalidate and remove the previous score, record is now [5].
"D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
"+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
The total sum is 5 + 10 + 15 = 30.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> ops = ["5","-2","4","C","D","9","+","+"]
<strong>Output:</strong> 27
<strong>Explanation:</strong>
"5" - Add 5 to the record, record is now [5].
"-2" - Add -2 to the record, record is now [5, -2].
"4" - Add 4 to the record, record is now [5, -2, 4].
"C" - Invalidate and remove the previous score, record is now [5, -2].
"D" - Add 2 * -2 = -4 to the record, record is now [5, -2, -4].
"9" - Add 9 to the record, record is now [5, -2, -4, 9].
"+" - Add -4 + 9 = 5 to the record, record is now [5, -2, -4, 9, 5].
"+" - Add 9 + 5 = 14 to the record, record is now [5, -2, -4, 9, 5, 14].
The total sum is 5 + -2 + -4 + 9 + 5 + 14 = 27.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> ops = ["1","C"]
<strong>Output:</strong> 0
<strong>Explanation:</strong>
"1" - Add 1 to the record, record is now [1].
"C" - Invalidate and remove the previous score, record is now [].
Since the record is empty, the total sum is 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= operations.length &lt;= 1000</code></li>
	<li><code>operations[i]</code> is <code>"C"</code>, <code>"D"</code>, <code>"+"</code>, or a string representing an integer in the range <code>[-3 * 10<sup>4</sup>, 3 * 10<sup>4</sup>]</code>.</li>
	<li>For operation <code>"+"</code>, there will always be at least two previous scores on the record.</li>
	<li>For operations <code>"C"</code> and <code>"D"</code>, there will always be at least one previous score on the record.</li>
</ul>
</div>