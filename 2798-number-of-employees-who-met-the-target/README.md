<h2><a href="https://leetcode.com/problems/number-of-employees-who-met-the-target/">2798. Number of Employees Who Met the Target</a></h2><h3>Easy</h3><hr><div><p>There are <code>n</code> employees in a company, numbered from <code>0</code> to <code>n - 1</code>. Each employee <code>i</code> has worked for <code>hours[i]</code> hours in the company.</p>

<p>The company requires each employee to work for <strong>at least</strong> <code>target</code> hours.</p>

<p>You are given a <strong>0-indexed</strong> array of non-negative integers <code>hours</code> of length <code>n</code> and a non-negative integer <code>target</code>.</p>

<p>Return <em>the integer denoting the number of employees who worked at least</em> <code>target</code> <em>hours</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> hours = [0,1,2,3,4], target = 2
<strong>Output:</strong> 3
<strong>Explanation:</strong> The company wants each employee to work for at least 2 hours.
- Employee 0 worked for 0 hours and didn't meet the target.
- Employee 1 worked for 1 hours and didn't meet the target.
- Employee 2 worked for 2 hours and met the target.
- Employee 3 worked for 3 hours and met the target.
- Employee 4 worked for 4 hours and met the target.
There are 3 employees who met the target.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> hours = [5,1,4,2,2], target = 6
<strong>Output:</strong> 0
<strong>Explanation:</strong> The company wants each employee to work for at least 6 hours.
There are 0 employees who met the target.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n == hours.length &lt;= 50</code></li>
	<li><code>0 &lt;=&nbsp;hours[i], target &lt;= 10<sup>5</sup></code></li>
</ul>
</div>