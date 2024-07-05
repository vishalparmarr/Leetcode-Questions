<h2><a href="https://leetcode.com/problems/customers-who-bought-all-products/">1045. Customers Who Bought All Products</a></h2><h3>Medium</h3><hr><div class="sql-schema-wrapper__3VBi"><a class="sql-schema-link__3cEg">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></a></div><div><p>Table: <code>Customer</code></p>

<pre>+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| customer_id | int     |
| product_key | int     |
+-------------+---------+
This table may contain duplicates rows. 
<code>customer_id</code> is not NULL<code>.</code>
product_key is a foreign key (reference column) to <code>Product</code> table.
</pre>

<p>&nbsp;</p>

<p>Table: <code>Product</code></p>

<pre>+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| product_key | int     |
+-------------+---------+
product_key is the primary key (column with unique values) for this table.
</pre>

<p>&nbsp;</p>

<p>Write a solution to report the customer ids from the <code>Customer</code> table that bought all the products in the <code>Product</code> table.</p>

<p>Return the result table in <strong>any order</strong>.</p>

<p>The&nbsp;result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> 
Customer table:
+-------------+-------------+
| customer_id | product_key |
+-------------+-------------+
| 1           | 5           |
| 2           | 6           |
| 3           | 5           |
| 3           | 6           |
| 1           | 6           |
+-------------+-------------+
Product table:
+-------------+
| product_key |
+-------------+
| 5           |
| 6           |
+-------------+
<strong>Output:</strong> 
+-------------+
| customer_id |
+-------------+
| 1           |
| 3           |
+-------------+
<strong>Explanation:</strong> 
The customers who bought all the products (5 and 6) are customers with IDs 1 and 3.
</pre>
</div>