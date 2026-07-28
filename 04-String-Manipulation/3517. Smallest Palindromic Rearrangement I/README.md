<h2><a href="https://leetcode.com/problems/smallest-palindromic-rearrangement-i">3517. Smallest Palindromic Rearrangement I</a></h2>

<p>You are given a <strong><span data-keyword="palindrome-string" class=" cursor-pointer relative text-dark-blue-s text-sm"><button type="button" aria-haspopup="dialog" aria-expanded="false" aria-controls="radix-_r_1q_" data-state="closed" class="">palindromic</button></span></strong> string <code>s</code>.</p>

<p>Return the <strong><span data-keyword="lexicographically-smaller-string" class=" cursor-pointer relative text-dark-blue-s text-sm"><button type="button" aria-haspopup="dialog" aria-expanded="false" aria-controls="radix-_r_1r_" data-state="closed" class="">lexicographically smallest</button></span></strong> palindromic <span data-keyword="permutation-string" class=" cursor-pointer relative text-dark-blue-s text-sm"><button type="button" aria-haspopup="dialog" aria-expanded="false" aria-controls="radix-_r_1s_" data-state="closed" class="">permutation</button></span> of <code>s</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = "z"</span></p>

<p><strong>Output:</strong> <span class="example-io">"z"</span></p>

<p><strong>Explanation:</strong></p>

<p>A string of only one character is already the lexicographically smallest palindrome.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = "babab"</span></p>

<p><strong>Output:</strong> <span class="example-io">"abbba"</span></p>

<p><strong>Explanation:</strong></p>

<p>Rearranging <code>"babab"</code> → <code>"abbba"</code> gives the smallest lexicographic palindrome.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = "daccad"</span></p>

<p><strong>Output:</strong> <span class="example-io">"acddca"</span></p>

<p><strong>Explanation:</strong></p>

<p>Rearranging <code>"daccad"</code> → <code>"acddca"</code> gives the smallest lexicographic palindrome.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s</code> consists of lowercase English letters.</li>
	<li><code>s</code> is guaranteed to be palindromic.</li>
</ul>


---

Error connecting to AI API: Request had invalid authentication credentials. Expected OAuth 2 access token, login cookie or other valid authentication credential. See https://developers.google.com/identity/sign-in/web/devconsole-project.