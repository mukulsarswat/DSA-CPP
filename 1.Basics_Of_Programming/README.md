<!-- README: Programming Basics – Theory Pack (HTML) -->
<div align="center">
  <h1 style="margin:0 0 8px; font-size:40px;">📘 Programming Basics – Theory Pack</h1>
  <p style="margin:0 0 14px; font-size:16px; color:#555;">
    Quick theory notes with tiny examples for absolute clarity.
  </p>
<ul> <li><a href="#book">📚 Recommended Book</a></li></ul>
  <div style="display:inline-block; padding:6px 10px; border-radius:999px; background:#f1f5f9; color:#0f172a; font-weight:600;">
    Easy • Basics • C++ flavored examples
  </div>
<div>
      <a href="https://www.codechef.com/practice/cpp" style="text-decoration:none; margin-right:6px;">Solve</a> •
      <a href="https://www.geeksforgeeks.org/cpp/cpp-exercises/" style="text-decoration:none; margin:0 6px;">Editorial</a> •
      <a href="https://www.youtube.com/watch?v=EAR7De6Goz4&t=250s&ab_channel=takeUforward" style="text-decoration:none; margin:0 6px;">YouTube</a>
    </div>

   <!-- Book Section -->
   <section id="book" style="margin-top: 30px;">
  <h2 style="color:#2c3e50;">📚 Recommended Book</h2>
  <p>
    For a more detailed explanation of C programming concepts, you can refer to the classic book:
    <a href="https://www.slideshare.net/slideshow/let-us-c-yashwant-kanetkar1/21493342" 
       target="_blank" 
       style="color:#3498db; text-decoration:none; font-weight:bold;">
      Let Us C by Yashwant Kanetkar
    </a>
  </p>
</section>
</div>

<hr style="border:none; border-top:1px solid #e5e7eb; margin:24px 0;" />

<!-- Top Navigation -->
<div align="center" style="margin: 0 auto 22px; max-width:980px;">
  <a href="#user-io" style="text-decoration:none; margin:6px 8px; padding:8px 12px; border-radius:10px; background:#eef2ff; color:#3730a3; font-weight:600;">User I/O</a>
  <a href="#data-types" style="text-decoration:none; margin:6px 8px; padding:8px 12px; border-radius:10px; background:#ecfeff; color:#155e75; font-weight:600;">Data Types</a>
  <a href="#if-else" style="text-decoration:none; margin:6px 8px; padding:8px 12px; border-radius:10px; background:#fff7ed; color:#9a3412; font-weight:600;">If–Else</a>
  <a href="#switch" style="text-decoration:none; margin:6px 8px; padding:8px 12px; border-radius:10px; background:#fef2f2; color:#991b1b; font-weight:600;">Switch</a>
  <a href="#arrays-strings" style="text-decoration:none; margin:6px 8px; padding:8px 12px; border-radius:10px; background:#f0fdf4; color:#14532d; font-weight:600;">Arrays & Strings</a>
  <a href="#for-loops" style="text-decoration:none; margin:6px 8px; padding:8px 12px; border-radius:10px; background:#eef2ff; color:#3730a3; font-weight:600;">For Loops</a>
  <a href="#while-loops" style="text-decoration:none; margin:6px 8px; padding:8px 12px; border-radius:10px; background:#ecfeff; color:#155e75; font-weight:600;">While Loops</a>
  <a href="#functions" style="text-decoration:none; margin:6px 8px; padding:8px 12px; border-radius:10px; background:#fff7ed; color:#9a3412; font-weight:600;">Functions</a>
  <a href="#time-complexity" style="text-decoration:none; margin:6px 8px; padding:8px 12px; border-radius:10px; background:#fef2f2; color:#991b1b; font-weight:600;">Time Complexity</a>
</div>

<!-- Link legend / placeholders -->
<div align="center" style="margin: 0 auto 26px; max-width:980px; font-size:14px; color:#64748b;">
  <strong>Links:</strong>
  <span style="margin-left:8px; padding:3px 8px; background:#e2e8f0; border-radius:8px;">Solve</span>
  <span style="margin-left:6px; padding:3px 8px; background:#e2e8f0; border-radius:8px;">Editorial</span>
  <span style="margin-left:6px; padding:3px 8px; background:#e2e8f0; border-radius:8px;">Post</span>
  <span style="margin-left:6px; padding:3px 8px; background:#e2e8f0; border-radius:8px;">YouTube</span>
  <span style="margin-left:6px; color:#94a3b8;">(replace <code>#</code> with actual links)</span>
</div>

<!-- Card styles -->
<div style="max-width:980px; margin:0 auto; display:grid; grid-template-columns:repeat(auto-fit,minmax(280px,1fr)); gap:16px;">

  <!-- User Input / Output -->
  <div id="user-io" style="border:1px solid #e5e7eb; border-radius:16px; padding:16px;">
    <h2 style="margin-top:0;">🖥️ User Input / Output</h2>
    <p><strong>Input</strong> is how a program reads data from the user; <strong>output</strong> is how it shows results back.</p>
    <pre style="background:#0b1021; color:#e5e7eb; padding:12px; border-radius:10px; overflow:auto;"><code>// C++
#include &lt;iostream&gt;
using namespace std;
int main() {
  int x; 
  cout &lt;&lt; "Enter a number: ";
  cin &gt;&gt; x;
  cout &lt;&lt; "You typed " &lt;&lt; x &lt;&lt; "\n";
}</code></pre>
  </div>

  <!-- Data Types -->
  <div id="data-types" style="border:1px solid #e5e7eb; border-radius:16px; padding:16px;">
    <h2 style="margin-top:0;">🔤 Data Types</h2>
    <p>Types define <em>what</em> can be stored and how much memory it uses.</p>
    <ul>
      <li><strong>int</strong> – whole numbers</li>
      <li><strong>float/double</strong> – decimals</li>
      <li><strong>char</strong> – single character</li>
      <li><strong>bool</strong> – true/false</li>
      <li><strong>string</strong> – text (C++: <code>std::string</code>)</li>
    </ul>
    <pre style="background:#0b1021; color:#e5e7eb; padding:12px; border-radius:10px; overflow:auto;"><code>int a = 5; double pi = 3.14159; 
char grade = 'A'; bool ok = true; 
string name = "Alice";</code></pre>
  </div>

  <!-- If Else -->
  <div id="if-else" style="border:1px solid #e5e7eb; border-radius:16px; padding:16px;">
    <h2 style="margin-top:0;">🔀 If–Else Statements</h2>
    <p>Branch execution based on a condition.</p>
    <pre style="background:#0b1021; color:#e5e7eb; padding:12px; border-radius:10px; overflow:auto;"><code>int n = 10;
if (n % 2 == 0) cout &lt;&lt; "Even";
else            cout &lt;&lt; "Odd";</code></pre>
  </div>

  <!-- Switch -->
  <div id="switch" style="border:1px solid #e5e7eb; border-radius:16px; padding:16px;">
    <h2 style="margin-top:0;">🎚️ Switch Statement</h2>
    <p>Cleaner alternative to multiple <code>if–else</code> checks for discrete values.</p>
    <pre style="background:#0b1021; color:#e5e7eb; padding:12px; border-radius:10px; overflow:auto;"><code>char op = '+';
switch (op) {
  case '+': cout &lt;&lt; "Add"; break;
  case '-': cout &lt;&lt; "Sub"; break;
  default:  cout &lt;&lt; "Unknown";
}</code></pre>
  </div>

  <!-- Arrays & Strings -->
  <div id="arrays-strings" style="border:1px solid #e5e7eb; border-radius:16px; padding:16px;">
    <h2 style="margin-top:0;">🧩 Arrays & Strings</h2>
    <p><strong>Arrays</strong> hold fixed-size collections; <strong>strings</strong> represent text.</p>
    <pre style="background:#0b1021; color:#e5e7eb; padding:12px; border-radius:10px; overflow:auto;"><code>int a[5] = {1,2,3,4,5};
for (int i = 0; i &lt; 5; ++i) cout &lt;&lt; a[i] &lt;&lt; " ";

#include &lt;string&gt;
string s = "hello";
cout &lt;&lt; s.size();</code></pre>
  </div>

  <!-- For Loops -->
  <div id="for-loops" style="border:1px solid #e5e7eb; border-radius:16px; padding:16px;">
    <h2 style="margin-top:0;">🔁 For Loops</h2>
    <p>Best for a known number of iterations.</p>
    <pre style="background:#0b1021; color:#e5e7eb; padding:12px; border-radius:10px; overflow:auto;"><code>for (int i = 1; i &lt;= 5; ++i) {
  cout &lt;&lt; i &lt;&lt; " ";
}</code></pre>
  </div>

  <!-- While Loops -->
  <div id="while-loops" style="border:1px solid #e5e7eb; border-radius:16px; padding:16px;">
    <h2 style="margin-top:0;">🔄 While Loops</h2>
    <p>Good when the stopping point depends on a condition.</p>
    <pre style="background:#0b1021; color:#e5e7eb; padding:12px; border-radius:10px; overflow:auto;"><code>int i = 1;
while (i &lt;= 5) {
  cout &lt;&lt; i &lt;&lt; " ";
  ++i;
}</code></pre>
  </div>

  <!-- Functions -->
  <div id="functions" style="border:1px solid #e5e7eb; border-radius:16px; padding:16px;">
    <h2 style="margin-top:0;">🧪 Functions (Pass by Value & Reference)</h2>
    <p>Reusable blocks. Passing by <em>value</em> copies; by <em>reference</em> allows modification.</p>
    <pre style="background:#0b1021; color:#e5e7eb; padding:12px; border-radius:10px; overflow:auto;"><code>void byValue(int x) { x = 10; }      // no effect outside
void byRef(int &x) { x = 10; }        // changes caller's variable

int main() {
  int a = 5, b = 5;
  byValue(a); byRef(b);
  // a == 5, b == 10
}</code></pre>
  </div>

  <!-- Time Complexity -->
  <div id="time-complexity" style="border:1px solid #e5e7eb; border-radius:16px; padding:16px;">
    <h2 style="margin-top:0;">⏱️ Time Complexity (Basics)</h2>
    <p>How runtime grows with input size <code>n</code>.</p>
    <div style="overflow:auto;">
      <table style="width:100%; border-collapse:collapse;">
        <thead>
          <tr>
            <th style="text-align:left; padding:8px; border-bottom:1px solid #e5e7eb;">Class</th>
            <th style="text-align:left; padding:8px; border-bottom:1px solid #e5e7eb;">Meaning</th>
            <th style="text-align:left; padding:8px; border-bottom:1px solid #e5e7eb;">Example</th>
          </tr>
        </thead>
        <tbody>
          <tr>
            <td style="padding:8px;">O(1)</td>
            <td style="padding:8px;">Constant</td>
            <td style="padding:8px;"><code>a[0]</code></td>
          </tr>
          <tr>
            <td style="padding:8px;">O(log n)</td>
            <td style="padding:8px;">Logarithmic</td>
            <td style="padding:8px;">Binary search</td>
          </tr>
          <tr>
            <td style="padding:8px;">O(n)</td>
            <td style="padding:8px;">Linear</td>
            <td style="padding:8px;">Single loop</td>
          </tr>
          <tr>
            <td style="padding:8px;">O(n log n)</td>
            <td style="padding:8px;">Linearithmic</td>
            <td style="padding:8px;">Merge sort</td>
          </tr>
          <tr>
            <td style="padding:8px;">O(n²)</td>
            <td style="padding:8px;">Quadratic</td>
            <td style="padding:8px;">Nested loops</td>
          </tr>
          <tr>
            <td style="padding:8px;">O(2^n), O(n!)</td>
            <td style="padding:8px;">Exponential / Factorial</td>
            <td style="padding:8px;">Backtracking / permutations</td>
          </tr>
        </tbody>
      </table>
    </div>
    <pre style="background:#0b1021; color:#e5e7eb; padding:12px; border-radius:10px; overflow:auto;"><code>// Count ops ~ O(n)
long long sum(const vector&lt;int&gt;&amp; v){
  long long s=0;
  for(int x: v) s+=x;
  return s;
}</code></pre>
  </div>
</div>

<!-- Bottom Links -->
<div align="center" style="margin-top:20px;">
  <a href="https://www.youtube.com/watch?v=EAR7De6Goz4&t=250s&ab_channel=takeUforward" style="text-decoration:none; margin-right:6px;">Learn Basics</a> •
  <a href="https://www.geeksforgeeks.org/dsa/dsa-tutorial-learn-data-structures-and-algorithms/" style="text-decoration:none; margin-left:6px;">Analyse Further</a>
</div>

<!-- Footer -->
<p align="center" style="color:#94a3b8; margin:28px 0 10px;">
  💡 Tip: Replace all <code>#</code> placeholders with your Solve / Editorial / Post / YouTube links.
</p>
