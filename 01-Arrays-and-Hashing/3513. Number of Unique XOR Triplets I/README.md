<h2><a href="https://leetcode.com/problems/number-of-unique-xor-triplets-i">3513. Number of Unique XOR Triplets I</a></h2>

<p>You are given an integer array <code>nums</code> of length <code>n</code>, where <code>nums</code> is a <strong><span data-keyword="permutation" class=" cursor-pointer relative text-dark-blue-s text-sm"><button type="button" aria-haspopup="dialog" aria-expanded="false" aria-controls="radix-_r_1l_" data-state="closed" class="">permutation</button></span></strong> of the numbers in the range <code>[1, n]</code>.</p>

<p>A <strong>XOR triplet</strong> is defined as the XOR of three elements <code>nums[i] XOR nums[j] XOR nums[k]</code> where <code>i &lt;= j &lt;= k</code>.</p>

<p>Return the number of <strong>unique</strong> XOR triplet values from all possible triplets <code>(i, j, k)</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2]</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong></p>

<p>The possible XOR triplet values are:</p>

<ul>
	<li><code>(0, 0, 0) → 1 XOR 1 XOR 1 = 1</code></li>
	<li><code>(0, 0, 1) → 1 XOR 1 XOR 2 = 2</code></li>
	<li><code>(0, 1, 1) → 1 XOR 2 XOR 2 = 1</code></li>
	<li><code>(1, 1, 1) → 2 XOR 2 XOR 2 = 2</code></li>
</ul>

<p>The unique XOR values are <code>{1, 2}</code>, so the output is 2.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [3,1,2]</span></p>

<p><strong>Output:</strong> <span class="example-io">4</span></p>

<p><strong>Explanation:</strong></p>

<p>The possible XOR triplet values include:</p>

<ul>
	<li><code>(0, 0, 0) → 3 XOR 3 XOR 3 = 3</code></li>
	<li><code>(0, 0, 1) → 3 XOR 3 XOR 1 = 1</code></li>
	<li><code>(0, 0, 2) → 3 XOR 3 XOR 2 = 2</code></li>
	<li><code>(0, 1, 2) → 3 XOR 1 XOR 2 = 0</code></li>
</ul>

<p>The unique XOR values are <code>{0, 1, 2, 3}</code>, so the output is 4.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n == nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= n</code></li>
	<li><code>nums</code> is a permutation of integers from <code>1</code> to <code>n</code>.</li>
</ul>


---

Error connecting to AI API: Request had invalid authentication credentials. Expected OAuth 2 access token, login cookie or other valid authentication credential. See https://developers.google.com/identity/sign-in/web/devconsole-project.