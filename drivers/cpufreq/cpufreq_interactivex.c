


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>LG-P500-2.6.35-re-write/drivers/cpufreq/cpufreq_interactivex.c at master · franciscofranco/LG-P500-2.6.35-re-write</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="shortcut icon" href="/favicon.ico" type="image/x-icon" />

    
    

    <meta content="authenticity_token" name="csrf-param" />
<meta content="Y7SdKICFpfkzP7uYzLAnQ0O8/AqLfCYM4hYfxrmsuW8=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/stylesheets/bundles/github-16f02a2b1a2b7d2b6edf91eaaf072e87c70f95d2.css" media="screen" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/stylesheets/bundles/github2-d60e8ff9ae61ed2bf441f513d94ebd6d6145dd55.css" media="screen" rel="stylesheet" type="text/css" />
    

    <script src="https://a248.e.akamai.net/assets.github.com/javascripts/bundles/jquery-225576cef50ef2097c9f9fbcd8953c1572544611.js" type="text/javascript"></script>
    <script src="https://a248.e.akamai.net/assets.github.com/javascripts/bundles/github-353ded132c604f1bdf010516392d71052f37ffcf.js" type="text/javascript"></script>
    

      <link rel='permalink' href='/franciscofranco/LG-P500-2.6.35-re-write/blob/b0bb7b4c0b09f97728074fcff4ef50598a7f838d/drivers/cpufreq/cpufreq_interactivex.c'>
    <meta property="og:title" content="LG-P500-2.6.35-re-write"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/franciscofranco/LG-P500-2.6.35-re-write"/>
    <meta property="og:image" content="https://a248.e.akamai.net/assets.github.com/images/gravatars/gravatar-140.png?1329275898"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="LG-P500-2.6.35-re-write hosted on GitHub"/>

    <meta name="description" content="LG-P500-2.6.35-re-write hosted on GitHub" />
  <link href="https://github.com/franciscofranco/LG-P500-2.6.35-re-write/commits/master.atom" rel="alternate" title="Recent Commits to LG-P500-2.6.35-re-write:master" type="application/atom+xml" />

  </head>


  <body class="logged_in page-blob windows vis-public env-production " data-blob-contribs-enabled="yes">
    <div id="wrapper">

    
    
    

      <div id="header" class="true clearfix">
        <div class="container clearfix">
          <a class="site-logo" href="https://github.com/">
            <!--[if IE]>
            <img alt="GitHub" class="github-logo" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7.png?1323882736" />
            <img alt="GitHub" class="github-logo-hover" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7-hover.png?1324325373" />
            <![endif]-->
            <img alt="GitHub" class="github-logo-4x" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x.png?1323882736" />
            <img alt="GitHub" class="github-logo-4x-hover" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x-hover.png?1324325373" />
          </a>

              
    <div class="topsearch ">
<form accept-charset="UTF-8" action="/search" id="top_search_form" method="get"><input name="utf8" type="hidden" value="&#x2713;" />        <a href="/search" class="advanced-search tooltipped downwards" title="Advanced Search"><span class="mini-icon advanced-search"></span></a>
        <div class="search placeholder-field js-placeholder-field">
          <label class="placeholder" for="global-search-field">Search…</label>
          <input type="text" class="search my_repos_autocompleter" id="global-search-field" name="q" results="5" spellcheck="false" autocomplete="off" data-autocomplete="my-repos-autocomplete">
          <div id="my-repos-autocomplete" class="autocomplete-results">
            <ul class="js-navigation-container"></ul>
          </div>
          <input type="submit" value="Search" class="button">
          <span class="mini-icon search-input"></span>
        </div>
        <input type="hidden" name="type" value="Everything" />
        <input type="hidden" name="repo" value="" />
        <input type="hidden" name="langOverride" value="" />
        <input type="hidden" name="start_value" value="1" />
</form>      <ul class="top-nav">
          <li class="explore"><a href="https://github.com/explore">Explore</a></li>
          <li><a href="https://gist.github.com">Gist</a></li>
          <li><a href="/blog">Blog</a></li>
        <li><a href="http://help.github.com">Help</a></li>
      </ul>
    </div>


            


  <div id="userbox">
    <div id="user">
      <a href="https://github.com/DJNoXD"><img height="20" src="https://secure.gravatar.com/avatar/2f5cc96332af6aa997a5b6ad4d7ffa71?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" width="20" /></a>
      <a href="https://github.com/DJNoXD" class="name">DJNoXD</a>
    </div>
    <ul id="user-links">
      <li>
        <a href="/inbox/notifications" id="notifications" class="tooltipped downwards" title="Notifications">
          <span class="mini-icon notifications"></span>
        </a>
      </li>
      <li><a href="/settings/profile" id="settings" class="tooltipped downwards" title="Account Settings"><span class="mini-icon account-settings"></span></a></li>
      <li>
          <a href="/logout" data-method="post" id="logout" class="tooltipped downwards" title="Log Out"><span class="mini-icon logout"></span></a>
      </li>
    </ul>
  </div>



          
        </div>
      </div>

      

            <div class="site" itemscope itemtype="http://schema.org/WebPage">
      <div class="container">
        <div class="pagehead repohead instapaper_ignore readability-menu">
        <div class="title-actions-bar">
          



              <ul class="pagehead-actions">


          <li class="js-toggler-container watch-button-container ">
            <a href="/franciscofranco/LG-P500-2.6.35-re-write/toggle_watch" class="minibutton btn-watch watch-button js-toggler-target" data-method="post" data-remote="true" rel="nofollow"><span><span class="icon"></span>Watch</span></a>
            <a href="/franciscofranco/LG-P500-2.6.35-re-write/toggle_watch" class="minibutton btn-watch unwatch-button js-toggler-target" data-method="post" data-remote="true" rel="nofollow"><span><span class="icon"></span>Unwatch</span></a>
          </li>

              <li><a href="/franciscofranco/LG-P500-2.6.35-re-write/fork" class="minibutton btn-fork fork-button" data-method="post" rel="nofollow"><span><span class="icon"></span>Fork</span></a></li>



      <li class="repostats">
        <ul class="repo-stats">
          <li class="watchers ">
            <a href="/franciscofranco/LG-P500-2.6.35-re-write/watchers" title="Watchers" class="tooltipped downwards">
              21
            </a>
          </li>
          <li class="forks">
            <a href="/franciscofranco/LG-P500-2.6.35-re-write/network" title="Forks" class="tooltipped downwards">
              9
            </a>
          </li>
        </ul>
      </li>
    </ul>

          <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb">
            <span class="mini-icon public-repo"></span>
<a href="/franciscofranco" itemprop="url">            <span itemprop="title">franciscofranco</span>
            </a> /
            <strong><a href="/franciscofranco/LG-P500-2.6.35-re-write" class="js-current-repository">LG-P500-2.6.35-re-write</a></strong>
          </h1>
        </div>

          

  <ul class="tabs">
    <li><a href="/franciscofranco/LG-P500-2.6.35-re-write" class="selected" highlight="repo_sourcerepo_downloadsrepo_commitsrepo_tagsrepo_branches">Code</a></li>
    <li><a href="/franciscofranco/LG-P500-2.6.35-re-write/network" highlight="repo_networkrepo_fork_queue">Network</a>
    <li><a href="/franciscofranco/LG-P500-2.6.35-re-write/pulls" highlight="repo_pulls">Pull Requests <span class='counter'>0</span></a></li>

      <li><a href="/franciscofranco/LG-P500-2.6.35-re-write/issues" highlight="repo_issues">Issues <span class='counter'>0</span></a></li>


    <li><a href="/franciscofranco/LG-P500-2.6.35-re-write/graphs" highlight="repo_graphsrepo_contributors">Stats &amp; Graphs</a></li>

  </ul>

  
<div class="frame frame-center tree-finder" style="display:none"
      data-tree-list-url="/franciscofranco/LG-P500-2.6.35-re-write/tree-list/b0bb7b4c0b09f97728074fcff4ef50598a7f838d"
      data-blob-url-prefix="/franciscofranco/LG-P500-2.6.35-re-write/blob/b0bb7b4c0b09f97728074fcff4ef50598a7f838d"
    >

  <div class="breadcrumb">
    <span class="bold"><a href="/franciscofranco/LG-P500-2.6.35-re-write">LG-P500-2.6.35-re-write</a></span> /
    <input class="tree-finder-input js-navigation-enable" type="text" name="query" autocomplete="off" spellcheck="false">
  </div>

    <div class="octotip">
      <p>
        <a href="/franciscofranco/LG-P500-2.6.35-re-write/dismiss-tree-finder-help" class="dismiss js-dismiss-tree-list-help" title="Hide this notice forever" rel="nofollow">Dismiss</a>
        <span class="bold">Octotip:</span> You've activated the <em>file finder</em>
        by pressing <span class="kbd">t</span> Start typing to filter the
        file list. Use <span class="kbd badmono">↑</span> and
        <span class="kbd badmono">↓</span> to navigate,
        <span class="kbd">enter</span> to view files.
      </p>
    </div>

  <table class="tree-browser" cellpadding="0" cellspacing="0">
    <tr class="js-header"><th>&nbsp;</th><th>name</th></tr>
    <tr class="js-no-results no-results" style="display: none">
      <th colspan="2">No matching files</th>
    </tr>
    <tbody class="js-results-list js-navigation-container">
    </tbody>
  </table>
</div>

<div id="jump-to-line" style="display:none">
  <h2>Jump to Line</h2>
  <form accept-charset="UTF-8">
    <input name="utf8" type="hidden" value="&#x2713;" />
    <input class="textfield" type="text">
    <div class="full-button">
      <button type="submit" class="classy">
        <span>Go</span>
      </button>
    </div>
  </form>
</div>


<div class="subnav-bar">

  <ul class="actions subnav">
    <li><a href="/franciscofranco/LG-P500-2.6.35-re-write/tags" class="blank" highlight="repo_tags">Tags <span class="counter">0</span></a></li>
    <li><a href="/franciscofranco/LG-P500-2.6.35-re-write/downloads" class="blank downloads-blank" highlight="repo_downloads">Downloads <span class="counter">0</span></a></li>
    
  </ul>

  <ul class="scope">
    <li class="switcher">

      <div class="context-menu-container js-menu-container">
        <a href="#"
           class="minibutton bigger switcher js-menu-target js-commitish-button btn-branch repo-tree"
           data-master-branch="master"
           data-ref="master">
          <span><span class="icon"></span><i>branch:</i> master</span>
        </a>

        <div class="context-pane commitish-context js-menu-content">
          <a href="javascript:;" class="close js-menu-close"></a>
          <div class="context-title">Switch Branches/Tags</div>
          <div class="context-body pane-selector commitish-selector js-filterable-commitishes">
            <div class="filterbar">
              <div class="placeholder-field js-placeholder-field">
                <label class="placeholder" for="context-commitish-filter-field" data-placeholder-mode="sticky">Filter branches/tags</label>
                <input type="text" id="context-commitish-filter-field" class="commitish-filter" />
              </div>

              <ul class="tabs">
                <li><a href="#" data-filter="branches" class="selected">Branches</a></li>
                <li><a href="#" data-filter="tags">Tags</a></li>
              </ul>
            </div>

              <div class="commitish-item branch-commitish selector-item">
                <h4>
                    <a href="/franciscofranco/LG-P500-2.6.35-re-write/blob/master/drivers/cpufreq/cpufreq_interactivex.c" data-name="master" rel="nofollow">master</a>
                </h4>
              </div>


            <div class="no-results" style="display:none">Nothing to show</div>
          </div>
        </div><!-- /.commitish-context-context -->
      </div>

    </li>
  </ul>

  <ul class="subnav with-scope">

    <li><a href="/franciscofranco/LG-P500-2.6.35-re-write" class="selected" highlight="repo_source">Files</a></li>
    <li><a href="/franciscofranco/LG-P500-2.6.35-re-write/commits/master" highlight="repo_commits">Commits</a></li>
    <li><a href="/franciscofranco/LG-P500-2.6.35-re-write/branches" class="" highlight="repo_branches" rel="nofollow">Branches <span class="counter">1</span></a></li>
  </ul>

</div>

  
  
  


          

        </div><!-- /.repohead -->

        





<!-- block_view_fragment_key: views7/v8/blob:v19:3bd245550b667abbc66c958e16438f41 -->
  <div id="slider">

    <div class="breadcrumb" data-path="drivers/cpufreq/cpufreq_interactivex.c/">
      <b itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/franciscofranco/LG-P500-2.6.35-re-write/tree/b0bb7b4c0b09f97728074fcff4ef50598a7f838d" class="js-rewrite-sha" itemprop="url"><span itemprop="title">LG-P500-2.6.35-re-write</span></a></b> / <span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/franciscofranco/LG-P500-2.6.35-re-write/tree/b0bb7b4c0b09f97728074fcff4ef50598a7f838d/drivers" class="js-rewrite-sha" itemscope="url"><span itemprop="title">drivers</span></a></span> / <span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/franciscofranco/LG-P500-2.6.35-re-write/tree/b0bb7b4c0b09f97728074fcff4ef50598a7f838d/drivers/cpufreq" class="js-rewrite-sha" itemscope="url"><span itemprop="title">cpufreq</span></a></span> / <strong class="final-path">cpufreq_interactivex.c</strong> <span class="js-clippy mini-icon clippy " data-clipboard-text="drivers/cpufreq/cpufreq_interactivex.c" data-copied-hint="copied!" data-copy-hint="copy to clipboard"></span>
    </div>


      <div class="commit file-history-tease" data-path="drivers/cpufreq/cpufreq_interactivex.c/">
        <img class="main-avatar" height="24" src="https://secure.gravatar.com/avatar/06cac7b5dd29bffcaced2f3b02ce2c7d?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" width="24" />
        <span class="author"><a href="/franciscofranco">franciscofranco</a></span>
        <time class="js-relative-date" datetime="2011-10-02T11:59:56-07:00" title="2011-10-02 11:59:56">October 02, 2011</time>
        <div class="commit-title">
            <a href="/franciscofranco/LG-P500-2.6.35-re-write/commit/eb2dfc399c28804390c76f9480a450900e2eff3d" class="message">fixed a little bug in interactiveX</a>
        </div>

        <div class="participation">
          <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>1</strong> contributor</a></p>
          
        </div>
        <div id="blob_contributors_box" style="display:none">
          <h2>Users on GitHub who have contributed to this file</h2>
          <ul class="facebox-user-list">
            <li>
              <img height="24" src="https://secure.gravatar.com/avatar/06cac7b5dd29bffcaced2f3b02ce2c7d?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" width="24" />
              <a href="/franciscofranco">franciscofranco</a>
            </li>
          </ul>
        </div>
      </div>

    <div class="frames">
      <div class="frame frame-center" data-path="drivers/cpufreq/cpufreq_interactivex.c/" data-permalink-url="/franciscofranco/LG-P500-2.6.35-re-write/blob/b0bb7b4c0b09f97728074fcff4ef50598a7f838d/drivers/cpufreq/cpufreq_interactivex.c" data-title="LG-P500-2.6.35-re-write/drivers/cpufreq/cpufreq_interactivex.c at master · franciscofranco/LG-P500-2.6.35-re-write · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="mini-icon text-file"></b></span>
                <span class="mode" title="File Mode">100644</span>
                  <span>399 lines (324 sloc)</span>
                <span>10.902 kb</span>
              </div>
              <ul class="button-group actions">
                  <li>
                    <a class="grouped-button file-edit-link minibutton bigger lighter js-rewrite-sha" href="/franciscofranco/LG-P500-2.6.35-re-write/edit/b0bb7b4c0b09f97728074fcff4ef50598a7f838d/drivers/cpufreq/cpufreq_interactivex.c" data-method="post" rel="nofollow"><span>Edit this file</span></a>
                  </li>

                <li>
                  <a href="/franciscofranco/LG-P500-2.6.35-re-write/raw/master/drivers/cpufreq/cpufreq_interactivex.c" class="minibutton btn-raw grouped-button bigger lighter" id="raw-url"><span><span class="icon"></span>Raw</span></a>
                </li>
                  <li>
                    <a href="/franciscofranco/LG-P500-2.6.35-re-write/blame/master/drivers/cpufreq/cpufreq_interactivex.c" class="minibutton btn-blame grouped-button bigger lighter"><span><span class="icon"></span>Blame</span></a>
                  </li>
                <li>
                  <a href="/franciscofranco/LG-P500-2.6.35-re-write/commits/master/drivers/cpufreq/cpufreq_interactivex.c" class="minibutton btn-history grouped-button bigger lighter" rel="nofollow"><span><span class="icon"></span>History</span></a>
                </li>
              </ul>
            </div>
              <div class="data type-c">
      <table cellpadding="0" cellspacing="0" class="lines">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
</pre>
          </td>
          <td width="100%">
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm"> * drivers/cpufreq/cpufreq_interactive.c</span></div><div class='line' id='LC3'><span class="cm"> *</span></div><div class='line' id='LC4'><span class="cm"> * Copyright (C) 2010 Google, Inc.</span></div><div class='line' id='LC5'><span class="cm"> *</span></div><div class='line' id='LC6'><span class="cm"> * This software is licensed under the terms of the GNU General Public</span></div><div class='line' id='LC7'><span class="cm"> * License version 2, as published by the Free Software Foundation, and</span></div><div class='line' id='LC8'><span class="cm"> * may be copied, distributed, and modified under those terms.</span></div><div class='line' id='LC9'><span class="cm"> *</span></div><div class='line' id='LC10'><span class="cm"> * This program is distributed in the hope that it will be useful,</span></div><div class='line' id='LC11'><span class="cm"> * but WITHOUT ANY WARRANTY; without even the implied warranty of</span></div><div class='line' id='LC12'><span class="cm"> * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></div><div class='line' id='LC13'><span class="cm"> * GNU General Public License for more details.</span></div><div class='line' id='LC14'><span class="cm"> *</span></div><div class='line' id='LC15'><span class="cm"> * Author: Mike Chan (mike@android.com) - modified for suspend/wake by imoseyon</span></div><div class='line' id='LC16'><span class="cm"> *</span></div><div class='line' id='LC17'><span class="cm"> */</span></div><div class='line' id='LC18'><br/></div><div class='line' id='LC19'><span class="cp">#include &lt;linux/cpu.h&gt;</span></div><div class='line' id='LC20'><span class="cp">#include &lt;linux/cpumask.h&gt;</span></div><div class='line' id='LC21'><span class="cp">#include &lt;linux/cpufreq.h&gt;</span></div><div class='line' id='LC22'><span class="cp">#include &lt;linux/mutex.h&gt;</span></div><div class='line' id='LC23'><span class="cp">#include &lt;linux/sched.h&gt;</span></div><div class='line' id='LC24'><span class="cp">#include &lt;linux/tick.h&gt;</span></div><div class='line' id='LC25'><span class="cp">#include &lt;linux/timer.h&gt;</span></div><div class='line' id='LC26'><span class="cp">#include &lt;linux/workqueue.h&gt;</span></div><div class='line' id='LC27'><span class="cp">#include &lt;linux/earlysuspend.h&gt;</span></div><div class='line' id='LC28'><br/></div><div class='line' id='LC29'><span class="cp">#include &lt;asm/cputime.h&gt;</span></div><div class='line' id='LC30'><br/></div><div class='line' id='LC31'><span class="k">static</span> <span class="kt">void</span> <span class="p">(</span><span class="o">*</span><span class="n">pm_idle_old</span><span class="p">)(</span><span class="kt">void</span><span class="p">);</span></div><div class='line' id='LC32'><span class="k">static</span> <span class="n">atomic_t</span> <span class="n">active_count</span> <span class="o">=</span> <span class="n">ATOMIC_INIT</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC33'><br/></div><div class='line' id='LC34'><span class="k">static</span> <span class="n">DEFINE_PER_CPU</span><span class="p">(</span><span class="k">struct</span> <span class="n">timer_list</span><span class="p">,</span> <span class="n">cpu_timer</span><span class="p">);</span></div><div class='line' id='LC35'><br/></div><div class='line' id='LC36'><span class="k">static</span> <span class="n">DEFINE_PER_CPU</span><span class="p">(</span><span class="n">u64</span><span class="p">,</span> <span class="n">time_in_idle</span><span class="p">);</span></div><div class='line' id='LC37'><span class="k">static</span> <span class="n">DEFINE_PER_CPU</span><span class="p">(</span><span class="n">u64</span><span class="p">,</span> <span class="n">idle_exit_time</span><span class="p">);</span></div><div class='line' id='LC38'><br/></div><div class='line' id='LC39'><span class="k">static</span> <span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">;</span></div><div class='line' id='LC40'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">target_freq</span><span class="p">;</span></div><div class='line' id='LC41'><br/></div><div class='line' id='LC42'><span class="cm">/* Workqueues handle frequency scaling */</span></div><div class='line' id='LC43'><span class="k">static</span> <span class="k">struct</span> <span class="n">workqueue_struct</span> <span class="o">*</span><span class="n">up_wq</span><span class="p">;</span></div><div class='line' id='LC44'><span class="k">static</span> <span class="k">struct</span> <span class="n">workqueue_struct</span> <span class="o">*</span><span class="n">down_wq</span><span class="p">;</span></div><div class='line' id='LC45'><span class="k">static</span> <span class="k">struct</span> <span class="n">work_struct</span> <span class="n">freq_scale_work</span><span class="p">;</span></div><div class='line' id='LC46'><br/></div><div class='line' id='LC47'><span class="k">static</span> <span class="n">u64</span> <span class="n">freq_change_time</span><span class="p">;</span></div><div class='line' id='LC48'><span class="k">static</span> <span class="n">u64</span> <span class="n">freq_change_time_in_idle</span><span class="p">;</span></div><div class='line' id='LC49'><br/></div><div class='line' id='LC50'><span class="k">static</span> <span class="n">cpumask_t</span> <span class="n">work_cpumask</span><span class="p">;</span></div><div class='line' id='LC51'><br/></div><div class='line' id='LC52'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">suspended</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC53'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">enabled</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC54'><br/></div><div class='line' id='LC55'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">suspendfreq</span> <span class="o">=</span> <span class="mi">480000</span><span class="p">;</span></div><div class='line' id='LC56'><br/></div><div class='line' id='LC57'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">samples</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC58'><br/></div><div class='line' id='LC59'><span class="cm">/*</span></div><div class='line' id='LC60'><span class="cm"> * The minimum ammount of time to spend at a frequency before we can ramp down,</span></div><div class='line' id='LC61'><span class="cm"> * default is 50ms.</span></div><div class='line' id='LC62'><span class="cm"> */</span></div><div class='line' id='LC63'><span class="cp">#define DEFAULT_MIN_SAMPLE_TIME 50000;</span></div><div class='line' id='LC64'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">min_sample_time</span><span class="p">;</span></div><div class='line' id='LC65'><br/></div><div class='line' id='LC66'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">freq_threshold</span> <span class="o">=</span> <span class="mi">806400</span><span class="p">;</span></div><div class='line' id='LC67'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">resume_speed</span> <span class="o">=</span> <span class="mi">806400</span><span class="p">;</span></div><div class='line' id='LC68'><br/></div><div class='line' id='LC69'><span class="k">static</span> <span class="kt">int</span> <span class="n">cpufreq_governor_interactive</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span></div><div class='line' id='LC70'>		<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">event</span><span class="p">);</span></div><div class='line' id='LC71'><br/></div><div class='line' id='LC72'><span class="cp">#ifndef CONFIG_CPU_FREQ_DEFAULT_GOV_INTERACTIVE</span></div><div class='line' id='LC73'><span class="k">static</span></div><div class='line' id='LC74'><span class="cp">#endif</span></div><div class='line' id='LC75'><span class="k">struct</span> <span class="n">cpufreq_governor</span> <span class="n">cpufreq_gov_interactive</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC76'>	<span class="p">.</span><span class="n">name</span> <span class="o">=</span> <span class="s">&quot;InteractiveX&quot;</span><span class="p">,</span></div><div class='line' id='LC77'>	<span class="p">.</span><span class="n">governor</span> <span class="o">=</span> <span class="n">cpufreq_governor_interactive</span><span class="p">,</span></div><div class='line' id='LC78'>	<span class="p">.</span><span class="n">max_transition_latency</span> <span class="o">=</span> <span class="mi">10000000</span><span class="p">,</span></div><div class='line' id='LC79'>	<span class="p">.</span><span class="n">owner</span> <span class="o">=</span> <span class="n">THIS_MODULE</span><span class="p">,</span></div><div class='line' id='LC80'><span class="p">};</span></div><div class='line' id='LC81'><br/></div><div class='line' id='LC82'><span class="k">static</span> <span class="kt">void</span> <span class="nf">cpufreq_interactive_timer</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">data</span><span class="p">)</span></div><div class='line' id='LC83'><span class="p">{</span></div><div class='line' id='LC84'>	<span class="n">u64</span> <span class="n">delta_idle</span><span class="p">;</span></div><div class='line' id='LC85'>	<span class="n">u64</span> <span class="n">update_time</span><span class="p">;</span></div><div class='line' id='LC86'>	<span class="n">u64</span> <span class="o">*</span><span class="n">cpu_time_in_idle</span><span class="p">;</span></div><div class='line' id='LC87'>	<span class="n">u64</span> <span class="o">*</span><span class="n">cpu_idle_exit_time</span><span class="p">;</span></div><div class='line' id='LC88'>	<span class="k">struct</span> <span class="n">timer_list</span> <span class="o">*</span><span class="n">t</span><span class="p">;</span></div><div class='line' id='LC89'><br/></div><div class='line' id='LC90'>	<span class="n">u64</span> <span class="n">now_idle</span> <span class="o">=</span> <span class="n">get_cpu_idle_time_us</span><span class="p">(</span><span class="n">data</span><span class="p">,</span></div><div class='line' id='LC91'>						<span class="o">&amp;</span><span class="n">update_time</span><span class="p">);</span></div><div class='line' id='LC92'><br/></div><div class='line' id='LC93'><br/></div><div class='line' id='LC94'>	<span class="n">cpu_time_in_idle</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">time_in_idle</span><span class="p">,</span> <span class="n">data</span><span class="p">);</span></div><div class='line' id='LC95'>	<span class="n">cpu_idle_exit_time</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">idle_exit_time</span><span class="p">,</span> <span class="n">data</span><span class="p">);</span></div><div class='line' id='LC96'><br/></div><div class='line' id='LC97'>	<span class="k">if</span> <span class="p">(</span><span class="n">update_time</span> <span class="o">==</span> <span class="o">*</span><span class="n">cpu_idle_exit_time</span><span class="p">)</span></div><div class='line' id='LC98'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC99'><br/></div><div class='line' id='LC100'>	<span class="n">delta_idle</span> <span class="o">=</span> <span class="n">cputime64_sub</span><span class="p">(</span><span class="n">now_idle</span><span class="p">,</span> <span class="o">*</span><span class="n">cpu_time_in_idle</span><span class="p">);</span></div><div class='line' id='LC101'><br/></div><div class='line' id='LC102'>	<span class="cm">/* Scale up if there were no idle cycles since coming out of idle */</span></div><div class='line' id='LC103'>	<span class="k">if</span> <span class="p">(</span><span class="n">delta_idle</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC104'>		<span class="k">if</span> <span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span> <span class="o">==</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span><span class="p">)</span></div><div class='line' id='LC105'>			<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC106'><br/></div><div class='line' id='LC107'>		<span class="k">if</span> <span class="p">(</span><span class="n">nr_running</span><span class="p">()</span> <span class="o">&lt;</span> <span class="mi">1</span><span class="p">)</span></div><div class='line' id='LC108'>			<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC109'><br/></div><div class='line' id='LC110'>		<span class="c1">// imoseyon - when over 1.8Ghz jump less</span></div><div class='line' id='LC111'>		<span class="k">if</span> <span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span> <span class="o">&gt;</span> <span class="n">freq_threshold</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC112'>			<span class="k">if</span> <span class="p">(</span><span class="n">samples</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC113'>			  <span class="n">target_freq</span> <span class="o">=</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span><span class="p">;</span></div><div class='line' id='LC114'>			  <span class="n">samples</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC115'>			<span class="p">}</span> <span class="k">else</span> <span class="p">{</span> </div><div class='line' id='LC116'>			  <span class="n">samples</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC117'>			  <span class="n">target_freq</span> <span class="o">=</span> <span class="n">freq_threshold</span><span class="p">;</span></div><div class='line' id='LC118'>			<span class="p">}</span>  </div><div class='line' id='LC119'>		<span class="p">}</span> <span class="k">else</span> <span class="n">target_freq</span> <span class="o">=</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span><span class="p">;</span></div><div class='line' id='LC120'><br/></div><div class='line' id='LC121'>		<span class="n">cpumask_set_cpu</span><span class="p">(</span><span class="n">data</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">work_cpumask</span><span class="p">);</span></div><div class='line' id='LC122'>		<span class="n">queue_work</span><span class="p">(</span><span class="n">up_wq</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">freq_scale_work</span><span class="p">);</span></div><div class='line' id='LC123'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC124'>	<span class="p">}</span></div><div class='line' id='LC125'>	<span class="n">samples</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="c1">// reset sample counter</span></div><div class='line' id='LC126'>	<span class="cm">/*</span></div><div class='line' id='LC127'><span class="cm">	 * There is a window where if the cpu utlization can go from low to high</span></div><div class='line' id='LC128'><span class="cm">	 * between the timer expiring, delta_idle will be &gt; 0 and the cpu will</span></div><div class='line' id='LC129'><span class="cm">	 * be 100% busy, preventing idle from running, and this timer from</span></div><div class='line' id='LC130'><span class="cm">	 * firing. So setup another timer to fire to check cpu utlization.</span></div><div class='line' id='LC131'><span class="cm">	 * Do not setup the timer if there is no scheduled work.</span></div><div class='line' id='LC132'><span class="cm">	 */</span></div><div class='line' id='LC133'>	<span class="n">t</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">cpu_timer</span><span class="p">,</span> <span class="n">data</span><span class="p">);</span></div><div class='line' id='LC134'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">timer_pending</span><span class="p">(</span><span class="n">t</span><span class="p">)</span> <span class="o">&amp;&amp;</span> <span class="n">nr_running</span><span class="p">()</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC135'>			<span class="o">*</span><span class="n">cpu_time_in_idle</span> <span class="o">=</span> <span class="n">get_cpu_idle_time_us</span><span class="p">(</span></div><div class='line' id='LC136'>					<span class="n">data</span><span class="p">,</span> <span class="n">cpu_idle_exit_time</span><span class="p">);</span></div><div class='line' id='LC137'>			<span class="n">mod_timer</span><span class="p">(</span><span class="n">t</span><span class="p">,</span> <span class="n">jiffies</span> <span class="o">+</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC138'>	<span class="p">}</span></div><div class='line' id='LC139'><br/></div><div class='line' id='LC140'>	<span class="k">if</span> <span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span> <span class="o">==</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span><span class="p">)</span></div><div class='line' id='LC141'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC142'><br/></div><div class='line' id='LC143'>	<span class="cm">/*</span></div><div class='line' id='LC144'><span class="cm">	 * Do not scale down unless we have been at this frequency for the</span></div><div class='line' id='LC145'><span class="cm">	 * minimum sample time.</span></div><div class='line' id='LC146'><span class="cm">	 */</span></div><div class='line' id='LC147'>	<span class="k">if</span> <span class="p">(</span><span class="n">cputime64_sub</span><span class="p">(</span><span class="n">update_time</span><span class="p">,</span> <span class="n">freq_change_time</span><span class="p">)</span> <span class="o">&lt;</span> <span class="n">min_sample_time</span><span class="p">)</span></div><div class='line' id='LC148'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC149'><br/></div><div class='line' id='LC150'>	<span class="n">target_freq</span> <span class="o">=</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span><span class="p">;</span></div><div class='line' id='LC151'>	<span class="n">cpumask_set_cpu</span><span class="p">(</span><span class="n">data</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">work_cpumask</span><span class="p">);</span></div><div class='line' id='LC152'>	<span class="n">queue_work</span><span class="p">(</span><span class="n">down_wq</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">freq_scale_work</span><span class="p">);</span></div><div class='line' id='LC153'><span class="p">}</span></div><div class='line' id='LC154'><br/></div><div class='line' id='LC155'><span class="k">static</span> <span class="kt">void</span> <span class="nf">cpufreq_idle</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC156'><span class="p">{</span></div><div class='line' id='LC157'>	<span class="k">struct</span> <span class="n">timer_list</span> <span class="o">*</span><span class="n">t</span><span class="p">;</span></div><div class='line' id='LC158'>	<span class="n">u64</span> <span class="o">*</span><span class="n">cpu_time_in_idle</span><span class="p">;</span></div><div class='line' id='LC159'>	<span class="n">u64</span> <span class="o">*</span><span class="n">cpu_idle_exit_time</span><span class="p">;</span></div><div class='line' id='LC160'><br/></div><div class='line' id='LC161'>	<span class="n">pm_idle_old</span><span class="p">();</span></div><div class='line' id='LC162'><br/></div><div class='line' id='LC163'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">cpumask_test_cpu</span><span class="p">(</span><span class="n">smp_processor_id</span><span class="p">(),</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cpus</span><span class="p">))</span></div><div class='line' id='LC164'>			<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC165'><br/></div><div class='line' id='LC166'>	<span class="cm">/* Timer to fire in 1-2 ticks, jiffie aligned. */</span></div><div class='line' id='LC167'>	<span class="n">t</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">cpu_timer</span><span class="p">,</span> <span class="n">smp_processor_id</span><span class="p">());</span></div><div class='line' id='LC168'>	<span class="n">cpu_idle_exit_time</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">idle_exit_time</span><span class="p">,</span> <span class="n">smp_processor_id</span><span class="p">());</span></div><div class='line' id='LC169'>	<span class="n">cpu_time_in_idle</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">time_in_idle</span><span class="p">,</span> <span class="n">smp_processor_id</span><span class="p">());</span></div><div class='line' id='LC170'><br/></div><div class='line' id='LC171'>	<span class="k">if</span> <span class="p">(</span><span class="n">timer_pending</span><span class="p">(</span><span class="n">t</span><span class="p">)</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC172'>		<span class="o">*</span><span class="n">cpu_time_in_idle</span> <span class="o">=</span> <span class="n">get_cpu_idle_time_us</span><span class="p">(</span></div><div class='line' id='LC173'>				<span class="n">smp_processor_id</span><span class="p">(),</span> <span class="n">cpu_idle_exit_time</span><span class="p">);</span></div><div class='line' id='LC174'>		<span class="n">mod_timer</span><span class="p">(</span><span class="n">t</span><span class="p">,</span> <span class="n">jiffies</span> <span class="o">+</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC175'>	<span class="p">}</span></div><div class='line' id='LC176'><span class="p">}</span></div><div class='line' id='LC177'><br/></div><div class='line' id='LC178'><span class="cm">/*</span></div><div class='line' id='LC179'><span class="cm"> * Choose the cpu frequency based off the load. For now choose the minimum</span></div><div class='line' id='LC180'><span class="cm"> * frequency that will satisfy the load, which is not always the lower power.</span></div><div class='line' id='LC181'><span class="cm"> */</span></div><div class='line' id='LC182'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="nf">cpufreq_interactive_calc_freq</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">cpu</span><span class="p">)</span></div><div class='line' id='LC183'><span class="p">{</span></div><div class='line' id='LC184'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">delta_time</span><span class="p">;</span></div><div class='line' id='LC185'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">idle_time</span><span class="p">;</span></div><div class='line' id='LC186'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">cpu_load</span><span class="p">;</span></div><div class='line' id='LC187'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">newfreq</span><span class="p">;</span></div><div class='line' id='LC188'>	<span class="n">u64</span> <span class="n">current_wall_time</span><span class="p">;</span></div><div class='line' id='LC189'>	<span class="n">u64</span> <span class="n">current_idle_time</span><span class="p">;;</span></div><div class='line' id='LC190'><br/></div><div class='line' id='LC191'>	<span class="n">current_idle_time</span> <span class="o">=</span> <span class="n">get_cpu_idle_time_us</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">current_wall_time</span><span class="p">);</span></div><div class='line' id='LC192'><br/></div><div class='line' id='LC193'>	<span class="n">idle_time</span> <span class="o">=</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span><span class="p">)</span> <span class="n">current_idle_time</span> <span class="o">-</span> <span class="n">freq_change_time_in_idle</span><span class="p">;</span></div><div class='line' id='LC194'>	<span class="n">delta_time</span> <span class="o">=</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span><span class="p">)</span> <span class="n">current_wall_time</span> <span class="o">-</span> <span class="n">freq_change_time</span><span class="p">;</span></div><div class='line' id='LC195'><br/></div><div class='line' id='LC196'>	<span class="n">cpu_load</span> <span class="o">=</span> <span class="mi">100</span> <span class="o">*</span> <span class="p">(</span><span class="n">delta_time</span> <span class="o">-</span> <span class="n">idle_time</span><span class="p">)</span> <span class="o">/</span> <span class="n">delta_time</span><span class="p">;</span></div><div class='line' id='LC197'><br/></div><div class='line' id='LC198'>	<span class="n">newfreq</span> <span class="o">=</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span> <span class="o">*</span> <span class="n">cpu_load</span> <span class="o">/</span> <span class="mi">100</span><span class="p">;</span>	</div><div class='line' id='LC199'><br/></div><div class='line' id='LC200'>	<span class="k">return</span> <span class="n">newfreq</span><span class="p">;</span></div><div class='line' id='LC201'><span class="p">}</span></div><div class='line' id='LC202'><br/></div><div class='line' id='LC203'><br/></div><div class='line' id='LC204'><span class="cm">/* We use the same work function to sale up and down */</span></div><div class='line' id='LC205'><span class="k">static</span> <span class="kt">void</span> <span class="nf">cpufreq_interactive_freq_change_time_work</span><span class="p">(</span><span class="k">struct</span> <span class="n">work_struct</span> <span class="o">*</span><span class="n">work</span><span class="p">)</span></div><div class='line' id='LC206'><span class="p">{</span></div><div class='line' id='LC207'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">cpu</span><span class="p">;</span></div><div class='line' id='LC208'>	<span class="n">cpumask_t</span> <span class="n">tmp_mask</span> <span class="o">=</span> <span class="n">work_cpumask</span><span class="p">;</span></div><div class='line' id='LC209'><br/></div><div class='line' id='LC210'>	<span class="n">for_each_cpu</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="n">tmp_mask</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC211'>		<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">suspended</span> <span class="o">&amp;&amp;</span> <span class="p">(</span><span class="n">target_freq</span> <span class="o">&gt;=</span> <span class="n">freq_threshold</span> <span class="o">||</span> <span class="n">target_freq</span> <span class="o">==</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span><span class="p">)</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC212'>			<span class="k">if</span> <span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span> <span class="o">&lt;</span> <span class="mi">400000</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC213'>			  <span class="c1">// avoid quick jump from lowest to highest</span></div><div class='line' id='LC214'>			  <span class="n">target_freq</span> <span class="o">=</span> <span class="n">resume_speed</span><span class="p">;</span></div><div class='line' id='LC215'>			<span class="p">}</span></div><div class='line' id='LC216'>			<span class="k">if</span> <span class="p">(</span><span class="n">nr_running</span><span class="p">()</span> <span class="o">==</span> <span class="mi">1</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC217'>				<span class="n">cpumask_clear_cpu</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">work_cpumask</span><span class="p">);</span></div><div class='line' id='LC218'>				<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC219'>			<span class="p">}</span></div><div class='line' id='LC220'>			<span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">policy</span><span class="p">,</span> <span class="n">target_freq</span><span class="p">,</span> <span class="n">CPUFREQ_RELATION_H</span><span class="p">);</span></div><div class='line' id='LC221'>		<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC222'>			<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">suspended</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC223'>		  	  <span class="n">target_freq</span> <span class="o">=</span> <span class="n">cpufreq_interactive_calc_freq</span><span class="p">(</span><span class="n">cpu</span><span class="p">);</span></div><div class='line' id='LC224'>			  <span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">policy</span><span class="p">,</span> <span class="n">target_freq</span><span class="p">,</span> <span class="n">CPUFREQ_RELATION_L</span><span class="p">);</span></div><div class='line' id='LC225'>			<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>  <span class="c1">// special care when suspended</span></div><div class='line' id='LC226'>			  <span class="k">if</span> <span class="p">(</span><span class="n">target_freq</span> <span class="o">&gt;</span> <span class="n">suspendfreq</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC227'>			     <span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">policy</span><span class="p">,</span> <span class="n">suspendfreq</span><span class="p">,</span> <span class="n">CPUFREQ_RELATION_H</span><span class="p">);</span></div><div class='line' id='LC228'>			  <span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC229'>		  	    <span class="n">target_freq</span> <span class="o">=</span> <span class="n">cpufreq_interactive_calc_freq</span><span class="p">(</span><span class="n">cpu</span><span class="p">);</span></div><div class='line' id='LC230'>			    <span class="k">if</span> <span class="p">(</span><span class="n">target_freq</span> <span class="o">&lt;</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">)</span> </div><div class='line' id='LC231'>			      <span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">policy</span><span class="p">,</span> <span class="n">target_freq</span><span class="p">,</span> <span class="n">CPUFREQ_RELATION_H</span><span class="p">);</span></div><div class='line' id='LC232'>			  <span class="p">}</span></div><div class='line' id='LC233'>		       <span class="p">}</span></div><div class='line' id='LC234'>		<span class="p">}</span></div><div class='line' id='LC235'>	  <span class="n">freq_change_time_in_idle</span> <span class="o">=</span> <span class="n">get_cpu_idle_time_us</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">freq_change_time</span><span class="p">);</span></div><div class='line' id='LC236'>	  <span class="n">cpumask_clear_cpu</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">work_cpumask</span><span class="p">);</span></div><div class='line' id='LC237'>	<span class="p">}</span></div><div class='line' id='LC238'><br/></div><div class='line' id='LC239'><br/></div><div class='line' id='LC240'><span class="p">}</span></div><div class='line' id='LC241'><br/></div><div class='line' id='LC242'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_min_sample_time</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">kobj</span><span class="p">,</span></div><div class='line' id='LC243'>				<span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">attr</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC244'><span class="p">{</span></div><div class='line' id='LC245'>	<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%lu</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">min_sample_time</span><span class="p">);</span></div><div class='line' id='LC246'><span class="p">}</span></div><div class='line' id='LC247'><br/></div><div class='line' id='LC248'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_min_sample_time</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">kobj</span><span class="p">,</span></div><div class='line' id='LC249'>			<span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">attr</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC250'><span class="p">{</span></div><div class='line' id='LC251'>	<span class="k">return</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">min_sample_time</span><span class="p">);</span></div><div class='line' id='LC252'><span class="p">}</span></div><div class='line' id='LC253'><br/></div><div class='line' id='LC254'><span class="k">static</span> <span class="k">struct</span> <span class="n">global_attr</span> <span class="n">min_sample_time_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">min_sample_time</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC255'>		<span class="n">show_min_sample_time</span><span class="p">,</span> <span class="n">store_min_sample_time</span><span class="p">);</span></div><div class='line' id='LC256'><br/></div><div class='line' id='LC257'><span class="k">static</span> <span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">interactive_attributes</span><span class="p">[]</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC258'>	<span class="o">&amp;</span><span class="n">min_sample_time_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC259'>	<span class="nb">NULL</span><span class="p">,</span></div><div class='line' id='LC260'><span class="p">};</span></div><div class='line' id='LC261'><br/></div><div class='line' id='LC262'><span class="k">static</span> <span class="k">struct</span> <span class="n">attribute_group</span> <span class="n">interactive_attr_group</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC263'>	<span class="p">.</span><span class="n">attrs</span> <span class="o">=</span> <span class="n">interactive_attributes</span><span class="p">,</span></div><div class='line' id='LC264'>	<span class="p">.</span><span class="n">name</span> <span class="o">=</span> <span class="s">&quot;interactive&quot;</span><span class="p">,</span></div><div class='line' id='LC265'><span class="p">};</span></div><div class='line' id='LC266'><br/></div><div class='line' id='LC267'><span class="k">static</span> <span class="kt">void</span> <span class="nf">interactive_suspend</span><span class="p">(</span><span class="kt">int</span> <span class="n">suspend</span><span class="p">)</span></div><div class='line' id='LC268'><span class="p">{</span></div><div class='line' id='LC269'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">max_speed</span><span class="p">;</span></div><div class='line' id='LC270'><br/></div><div class='line' id='LC271'>	<span class="n">max_speed</span> <span class="o">=</span> <span class="n">resume_speed</span><span class="p">;</span></div><div class='line' id='LC272'><br/></div><div class='line' id='LC273'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">enabled</span><span class="p">)</span> <span class="k">return</span><span class="p">;</span></div><div class='line' id='LC274'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">suspend</span><span class="p">)</span> <span class="p">{</span> <span class="c1">// resume at max speed:</span></div><div class='line' id='LC275'>		<span class="n">suspended</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC276'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">policy</span><span class="p">,</span> <span class="n">max_speed</span><span class="p">,</span> <span class="n">CPUFREQ_RELATION_L</span><span class="p">);</span></div><div class='line' id='LC277'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pr_info</span><span class="p">(</span><span class="s">&quot;[imoseyon] interactive awake at %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">);</span></div><div class='line' id='LC278'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC279'>		<span class="n">suspended</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC280'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">policy</span><span class="p">,</span> <span class="n">suspendfreq</span><span class="p">,</span> <span class="n">CPUFREQ_RELATION_H</span><span class="p">);</span></div><div class='line' id='LC281'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pr_info</span><span class="p">(</span><span class="s">&quot;[imoseyon] interactive suspended at %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">);</span></div><div class='line' id='LC282'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC283'><span class="p">}</span></div><div class='line' id='LC284'><br/></div><div class='line' id='LC285'><span class="k">static</span> <span class="kt">void</span> <span class="nf">interactive_early_suspend</span><span class="p">(</span><span class="k">struct</span> <span class="n">early_suspend</span> <span class="o">*</span><span class="n">handler</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC286'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">interactive_suspend</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC287'><span class="p">}</span></div><div class='line' id='LC288'><br/></div><div class='line' id='LC289'><span class="k">static</span> <span class="kt">void</span> <span class="nf">interactive_late_resume</span><span class="p">(</span><span class="k">struct</span> <span class="n">early_suspend</span> <span class="o">*</span><span class="n">handler</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC290'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">interactive_suspend</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC291'><span class="p">}</span></div><div class='line' id='LC292'><br/></div><div class='line' id='LC293'><span class="k">static</span> <span class="k">struct</span> <span class="n">early_suspend</span> <span class="n">interactive_power_suspend</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC294'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">.</span><span class="n">suspend</span> <span class="o">=</span> <span class="n">interactive_early_suspend</span><span class="p">,</span></div><div class='line' id='LC295'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">.</span><span class="n">resume</span> <span class="o">=</span> <span class="n">interactive_late_resume</span><span class="p">,</span></div><div class='line' id='LC296'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">.</span><span class="n">level</span> <span class="o">=</span> <span class="n">EARLY_SUSPEND_LEVEL_DISABLE_FB</span> <span class="o">+</span> <span class="mi">1</span><span class="p">,</span></div><div class='line' id='LC297'><span class="p">};</span></div><div class='line' id='LC298'><br/></div><div class='line' id='LC299'><span class="k">static</span> <span class="kt">int</span> <span class="nf">cpufreq_governor_interactive</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">new_policy</span><span class="p">,</span></div><div class='line' id='LC300'>		<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">event</span><span class="p">)</span></div><div class='line' id='LC301'><span class="p">{</span></div><div class='line' id='LC302'>	<span class="kt">int</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC303'>	<span class="k">switch</span> <span class="p">(</span><span class="n">event</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC304'>	<span class="k">case</span> <span class="n">CPUFREQ_GOV_START</span>:</div><div class='line' id='LC305'>		<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">cpu_online</span><span class="p">(</span><span class="n">new_policy</span><span class="o">-&gt;</span><span class="n">cpu</span><span class="p">))</span></div><div class='line' id='LC306'>			<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC307'><br/></div><div class='line' id='LC308'>		<span class="cm">/*</span></div><div class='line' id='LC309'><span class="cm">		 * Do not register the idle hook and create sysfs</span></div><div class='line' id='LC310'><span class="cm">		 * entries if we have already done so.</span></div><div class='line' id='LC311'><span class="cm">		 */</span></div><div class='line' id='LC312'>		<span class="k">if</span> <span class="p">(</span><span class="n">atomic_inc_return</span><span class="p">(</span><span class="o">&amp;</span><span class="n">active_count</span><span class="p">)</span> <span class="o">&gt;</span> <span class="mi">1</span><span class="p">)</span></div><div class='line' id='LC313'>			<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC314'><br/></div><div class='line' id='LC315'>		<span class="n">rc</span> <span class="o">=</span> <span class="n">sysfs_create_group</span><span class="p">(</span><span class="n">cpufreq_global_kobject</span><span class="p">,</span></div><div class='line' id='LC316'>				<span class="o">&amp;</span><span class="n">interactive_attr_group</span><span class="p">);</span></div><div class='line' id='LC317'>		<span class="k">if</span> <span class="p">(</span><span class="n">rc</span><span class="p">)</span></div><div class='line' id='LC318'>			<span class="k">return</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC319'><br/></div><div class='line' id='LC320'>		<span class="n">pm_idle_old</span> <span class="o">=</span> <span class="n">pm_idle</span><span class="p">;</span></div><div class='line' id='LC321'>		<span class="n">pm_idle</span> <span class="o">=</span> <span class="n">cpufreq_idle</span><span class="p">;</span></div><div class='line' id='LC322'>		<span class="n">policy</span> <span class="o">=</span> <span class="n">new_policy</span><span class="p">;</span></div><div class='line' id='LC323'>		<span class="n">enabled</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC324'><br/></div><div class='line' id='LC325'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	<span class="n">register_early_suspend</span><span class="p">(</span><span class="o">&amp;</span><span class="n">interactive_power_suspend</span><span class="p">);</span></div><div class='line' id='LC326'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	<span class="n">pr_info</span><span class="p">(</span><span class="s">&quot;[imoseyon] interactive start - freq_threshold at %d, resume at %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">freq_threshold</span><span class="p">,</span> <span class="n">resume_speed</span><span class="p">);</span></div><div class='line' id='LC327'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC328'><br/></div><div class='line' id='LC329'>	<span class="k">case</span> <span class="n">CPUFREQ_GOV_STOP</span>:</div><div class='line' id='LC330'>		<span class="k">if</span> <span class="p">(</span><span class="n">atomic_dec_return</span><span class="p">(</span><span class="o">&amp;</span><span class="n">active_count</span><span class="p">)</span> <span class="o">&gt;</span> <span class="mi">1</span><span class="p">)</span></div><div class='line' id='LC331'>			<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC332'><br/></div><div class='line' id='LC333'>		<span class="n">sysfs_remove_group</span><span class="p">(</span><span class="n">cpufreq_global_kobject</span><span class="p">,</span></div><div class='line' id='LC334'>				<span class="o">&amp;</span><span class="n">interactive_attr_group</span><span class="p">);</span></div><div class='line' id='LC335'><br/></div><div class='line' id='LC336'>		<span class="n">pm_idle</span> <span class="o">=</span> <span class="n">pm_idle_old</span><span class="p">;</span></div><div class='line' id='LC337'>		<span class="n">del_timer</span><span class="p">(</span><span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">cpu_timer</span><span class="p">,</span> <span class="n">new_policy</span><span class="o">-&gt;</span><span class="n">cpu</span><span class="p">));</span></div><div class='line' id='LC338'>		<span class="n">enabled</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC339'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	<span class="n">unregister_early_suspend</span><span class="p">(</span><span class="o">&amp;</span><span class="n">interactive_power_suspend</span><span class="p">);</span></div><div class='line' id='LC340'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	<span class="n">pr_info</span><span class="p">(</span><span class="s">&quot;[imoseyon] interactive inactive</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC341'>			<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC342'><br/></div><div class='line' id='LC343'>	<span class="k">case</span> <span class="n">CPUFREQ_GOV_LIMITS</span>:</div><div class='line' id='LC344'>		<span class="k">if</span> <span class="p">(</span><span class="n">new_policy</span><span class="o">-&gt;</span><span class="n">max</span> <span class="o">&lt;</span> <span class="n">new_policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">)</span></div><div class='line' id='LC345'>			<span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">new_policy</span><span class="p">,</span></div><div class='line' id='LC346'>					<span class="n">new_policy</span><span class="o">-&gt;</span><span class="n">max</span><span class="p">,</span> <span class="n">CPUFREQ_RELATION_H</span><span class="p">);</span></div><div class='line' id='LC347'>		<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">new_policy</span><span class="o">-&gt;</span><span class="n">min</span> <span class="o">&gt;</span> <span class="n">new_policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">)</span></div><div class='line' id='LC348'>			<span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">new_policy</span><span class="p">,</span></div><div class='line' id='LC349'>					<span class="n">new_policy</span><span class="o">-&gt;</span><span class="n">min</span><span class="p">,</span> <span class="n">CPUFREQ_RELATION_L</span><span class="p">);</span></div><div class='line' id='LC350'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC351'>	<span class="p">}</span></div><div class='line' id='LC352'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC353'><span class="p">}</span></div><div class='line' id='LC354'><br/></div><div class='line' id='LC355'><span class="k">static</span> <span class="kt">int</span> <span class="n">__init</span> <span class="nf">cpufreq_interactive_init</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC356'><span class="p">{</span></div><div class='line' id='LC357'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC358'>	<span class="k">struct</span> <span class="n">timer_list</span> <span class="o">*</span><span class="n">t</span><span class="p">;</span></div><div class='line' id='LC359'>	<span class="n">min_sample_time</span> <span class="o">=</span> <span class="n">DEFAULT_MIN_SAMPLE_TIME</span><span class="p">;</span></div><div class='line' id='LC360'><br/></div><div class='line' id='LC361'>	<span class="cm">/* Initalize per-cpu timers */</span></div><div class='line' id='LC362'>	<span class="n">for_each_possible_cpu</span><span class="p">(</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC363'>		<span class="n">t</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">cpu_timer</span><span class="p">,</span> <span class="n">i</span><span class="p">);</span></div><div class='line' id='LC364'>		<span class="n">init_timer_deferrable</span><span class="p">(</span><span class="n">t</span><span class="p">);</span></div><div class='line' id='LC365'>		<span class="n">t</span><span class="o">-&gt;</span><span class="n">function</span> <span class="o">=</span> <span class="n">cpufreq_interactive_timer</span><span class="p">;</span></div><div class='line' id='LC366'>		<span class="n">t</span><span class="o">-&gt;</span><span class="n">data</span> <span class="o">=</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC367'>	<span class="p">}</span></div><div class='line' id='LC368'><br/></div><div class='line' id='LC369'>	<span class="cm">/* Scale up is high priority */</span></div><div class='line' id='LC370'>	<span class="n">up_wq</span> <span class="o">=</span> <span class="n">create_rt_workqueue</span><span class="p">(</span><span class="s">&quot;kinteractive_up&quot;</span><span class="p">);</span></div><div class='line' id='LC371'>	<span class="n">down_wq</span> <span class="o">=</span> <span class="n">create_workqueue</span><span class="p">(</span><span class="s">&quot;knteractive_down&quot;</span><span class="p">);</span></div><div class='line' id='LC372'><br/></div><div class='line' id='LC373'>	<span class="n">INIT_WORK</span><span class="p">(</span><span class="o">&amp;</span><span class="n">freq_scale_work</span><span class="p">,</span> <span class="n">cpufreq_interactive_freq_change_time_work</span><span class="p">);</span></div><div class='line' id='LC374'><br/></div><div class='line' id='LC375'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pr_info</span><span class="p">(</span><span class="s">&quot;[imoseyon] interactive enter</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC376'>	<span class="k">return</span> <span class="n">cpufreq_register_governor</span><span class="p">(</span><span class="o">&amp;</span><span class="n">cpufreq_gov_interactive</span><span class="p">);</span></div><div class='line' id='LC377'><span class="p">}</span></div><div class='line' id='LC378'><br/></div><div class='line' id='LC379'><span class="cp">#ifdef CONFIG_CPU_FREQ_DEFAULT_GOV_INTERACTIVE</span></div><div class='line' id='LC380'><span class="n">fs_initcall</span><span class="p">(</span><span class="n">cpufreq_interactive_init</span><span class="p">);</span></div><div class='line' id='LC381'><span class="cp">#else</span></div><div class='line' id='LC382'><span class="n">module_init</span><span class="p">(</span><span class="n">cpufreq_interactive_init</span><span class="p">);</span></div><div class='line' id='LC383'><span class="cp">#endif</span></div><div class='line' id='LC384'><br/></div><div class='line' id='LC385'><span class="k">static</span> <span class="kt">void</span> <span class="n">__exit</span> <span class="nf">cpufreq_interactive_exit</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC386'><span class="p">{</span></div><div class='line' id='LC387'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pr_info</span><span class="p">(</span><span class="s">&quot;[imoseyon] interactive exit</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC388'>	<span class="n">cpufreq_unregister_governor</span><span class="p">(</span><span class="o">&amp;</span><span class="n">cpufreq_gov_interactive</span><span class="p">);</span></div><div class='line' id='LC389'>	<span class="n">destroy_workqueue</span><span class="p">(</span><span class="n">up_wq</span><span class="p">);</span></div><div class='line' id='LC390'>	<span class="n">destroy_workqueue</span><span class="p">(</span><span class="n">down_wq</span><span class="p">);</span></div><div class='line' id='LC391'><span class="p">}</span></div><div class='line' id='LC392'><br/></div><div class='line' id='LC393'><span class="n">module_exit</span><span class="p">(</span><span class="n">cpufreq_interactive_exit</span><span class="p">);</span></div><div class='line' id='LC394'><br/></div><div class='line' id='LC395'><span class="n">MODULE_AUTHOR</span><span class="p">(</span><span class="s">&quot;Mike Chan &lt;mike@android.com&gt;&quot;</span><span class="p">);</span></div><div class='line' id='LC396'><span class="n">MODULE_DESCRIPTION</span><span class="p">(</span><span class="s">&quot;&#39;cpufreq_interactive&#39; - A cpufreq governor for &quot;</span></div><div class='line' id='LC397'>	<span class="s">&quot;Latency sensitive workloads&quot;</span><span class="p">);</span></div><div class='line' id='LC398'><span class="n">MODULE_LICENSE</span><span class="p">(</span><span class="s">&quot;GPL&quot;</span><span class="p">);</span></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>
      </div>
    </div>

  </div>

<div class="frame frame-loading large-loading-area" style="display:none;" data-tree-list-url="/franciscofranco/LG-P500-2.6.35-re-write/tree-list/b0bb7b4c0b09f97728074fcff4ef50598a7f838d" data-blob-url-prefix="/franciscofranco/LG-P500-2.6.35-re-write/blob/b0bb7b4c0b09f97728074fcff4ef50598a7f838d">
  <img src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-64.gif?1329872009" height="64" width="64">
</div>

      </div>
      <div class="context-overlay"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer" >
        
  <div class="upper_footer">
     <div class="container clearfix">

       <!--[if IE]><h4 id="blacktocat_ie">GitHub Links</h4><![endif]-->
       <![if !IE]><h4 id="blacktocat">GitHub Links</h4><![endif]>

       <ul class="footer_nav">
         <h4>GitHub</h4>
         <li><a href="https://github.com/about">About</a></li>
         <li><a href="https://github.com/blog">Blog</a></li>
         <li><a href="https://github.com/features">Features</a></li>
         <li><a href="https://github.com/contact">Contact &amp; Support</a></li>
         <li><a href="https://github.com/training">Training</a></li>
         <li><a href="http://enterprise.github.com/">GitHub Enterprise</a></li>
         <li><a href="http://status.github.com/">Site Status</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Tools</h4>
         <li><a href="http://get.gaug.es/">Gauges: Analyze web traffic</a></li>
         <li><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></li>
         <li><a href="https://gist.github.com">Gist: Code snippets</a></li>
         <li><a href="http://mac.github.com/">GitHub for Mac</a></li>
         <li><a href="http://mobile.github.com/">Issues for iPhone</a></li>
         <li><a href="http://jobs.github.com/">Job Board</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Extras</h4>
         <li><a href="http://shop.github.com/">GitHub Shop</a></li>
         <li><a href="http://octodex.github.com/">The Octodex</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Documentation</h4>
         <li><a href="http://help.github.com/">GitHub Help</a></li>
         <li><a href="http://developer.github.com/">Developer API</a></li>
         <li><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></li>
         <li><a href="http://pages.github.com/">GitHub Pages</a></li>
       </ul>

     </div><!-- /.site -->
  </div><!-- /.upper_footer -->

<div class="lower_footer">
  <div class="container clearfix">
    <!--[if IE]><div id="legal_ie"><![endif]-->
    <![if !IE]><div id="legal"><![endif]>
      <ul>
          <li><a href="https://github.com/site/terms">Terms of Service</a></li>
          <li><a href="https://github.com/site/privacy">Privacy</a></li>
          <li><a href="https://github.com/security">Security</a></li>
      </ul>

      <p>&copy; 2012 <span title="0.35768s from fe8.rs.github.com">GitHub</span> Inc. All rights reserved.</p>
    </div><!-- /#legal or /#legal_ie-->

      <div class="sponsor">
        <a href="http://www.rackspace.com" class="logo">
          <img alt="Dedicated Server" height="36" src="https://a248.e.akamai.net/assets.github.com/images/modules/footer/rackspaces_logo.png?1329521041" width="38" />
        </a>
        Powered by the <a href="http://www.rackspace.com ">Dedicated
        Servers</a> and<br/> <a href="http://www.rackspacecloud.com">Cloud
        Computing</a> of Rackspace Hosting<span>&reg;</span>
      </div>
  </div><!-- /.site -->
</div><!-- /.lower_footer -->

      </div><!-- /#footer -->

    

<div id="keyboard_shortcuts_pane" class="instapaper_ignore readability-extra" style="display:none">
  <h2>Keyboard Shortcuts <small><a href="#" class="js-see-all-keyboard-shortcuts">(see all)</a></small></h2>

  <div class="columns threecols">
    <div class="column first">
      <h3>Site wide shortcuts</h3>
      <dl class="keyboard-mappings">
        <dt>s</dt>
        <dd>Focus site search</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>?</dt>
        <dd>Bring up this help dialog</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column middle" style='display:none'>
      <h3>Commit list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>c <em>or</em> o <em>or</em> enter</dt>
        <dd>Open commit</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>y</dt>
        <dd>Expand URL to its canonical form</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column last" style='display:none'>
      <h3>Pull request list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>o <em>or</em> enter</dt>
        <dd>Open issue</dd>
      </dl>
    </div><!-- /.columns.last -->

  </div><!-- /.columns.equacols -->

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Issues</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>x</dt>
          <dd>Toggle selection</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column middle">
        <dl class="keyboard-mappings">
          <dt>I</dt>
          <dd>Mark selection as read</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>U</dt>
          <dd>Mark selection as unread</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Remove selection from view</dd>
        </dl>
      </div><!-- /.column.middle -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>c</dt>
          <dd>Create issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Create label</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Back to inbox</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>u</dt>
          <dd>Back to issues</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>/</dt>
          <dd>Focus issues search</dd>
        </dl>
      </div>
    </div>
  </div>

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Issues Dashboard</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
    </div>
  </div>

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Network Graph</h3>
    <div class="columns equacols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt><span class="badmono">←</span> <em>or</em> h</dt>
          <dd>Scroll left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">→</span> <em>or</em> l</dt>
          <dd>Scroll right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↑</span> <em>or</em> k</dt>
          <dd>Scroll up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↓</span> <em>or</em> j</dt>
          <dd>Scroll down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Toggle visibility of head labels</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">←</span> <em>or</em> shift h</dt>
          <dd>Scroll all the way left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">→</span> <em>or</em> shift l</dt>
          <dd>Scroll all the way right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↑</span> <em>or</em> shift k</dt>
          <dd>Scroll all the way up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↓</span> <em>or</em> shift j</dt>
          <dd>Scroll all the way down</dd>
        </dl>
      </div><!-- /.column.last -->
    </div>
  </div>

  <div >
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first" >
        <h3>Source Code Browsing</h3>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Activates the file finder</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Jump to line</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>w</dt>
          <dd>Switch branch/tag</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Expand URL to its canonical form</dd>
        </dl>
      </div>
    </div>
  </div>
</div>

    <div id="markdown-help" class="instapaper_ignore readability-extra">
  <h2>Markdown Cheat Sheet</h2>

  <div class="cheatsheet-content">

  <div class="mod">
    <div class="col">
      <h3>Format Text</h3>
      <p>Headers</p>
      <pre>
# This is an &lt;h1&gt; tag
## This is an &lt;h2&gt; tag
###### This is an &lt;h6&gt; tag</pre>
     <p>Text styles</p>
     <pre>
*This text will be italic*
_This will also be italic_
**This text will be bold**
__This will also be bold__

*You **can** combine them*
</pre>
    </div>
    <div class="col">
      <h3>Lists</h3>
      <p>Unordered</p>
      <pre>
* Item 1
* Item 2
  * Item 2a
  * Item 2b</pre>
     <p>Ordered</p>
     <pre>
1. Item 1
2. Item 2
3. Item 3
   * Item 3a
   * Item 3b</pre>
    </div>
    <div class="col">
      <h3>Miscellaneous</h3>
      <p>Images</p>
      <pre>
![GitHub Logo](/images/logo.png)
Format: ![Alt Text](url)
</pre>
     <p>Links</p>
     <pre>
http://github.com - automatic!
[GitHub](http://github.com)</pre>
<p>Blockquotes</p>
     <pre>
As Kanye West said:

> We're living the future so
> the present is our past.
</pre>
    </div>
  </div>
  <div class="rule"></div>

  <h3>Code Examples in Markdown</h3>
  <div class="col">
      <p>Syntax highlighting with <a href="http://github.github.com/github-flavored-markdown/" title="GitHub Flavored Markdown" target="_blank">GFM</a></p>
      <pre>
```javascript
function fancyAlert(arg) {
  if(arg) {
    $.facebox({div:'#foo'})
  }
}
```</pre>
    </div>
    <div class="col">
      <p>Or, indent your code 4 spaces</p>
      <pre>
Here is a Python code example
without syntax highlighting:

    def foo:
      if not bar:
        return true</pre>
    </div>
    <div class="col">
      <p>Inline code for comments</p>
      <pre>
I think you should use an
`&lt;addr&gt;` element here instead.</pre>
    </div>
  </div>

  </div>
</div>


    <div class="ajax-error-message">
      <p><span class="icon"></span> Something went wrong with that request. Please try again. <a href="javascript:;" class="ajax-error-dismiss">Dismiss</a></p>
    </div>

    <div id="logo-popup">
      <h2>Looking for the GitHub logo?</h2>
      <ul>
        <li>
          <h4>GitHub Logo</h4>
          <a href="http://github-media-downloads.s3.amazonaws.com/GitHub_Logos.zip"><img alt="Github_logo" src="https://a248.e.akamai.net/assets.github.com/images/modules/about_page/github_logo.png?1310104853" /></a>
          <a href="http://github-media-downloads.s3.amazonaws.com/GitHub_Logos.zip" class="minibutton btn-download download"><span><span class="icon"></span>Download</span></a>
        </li>
        <li>
          <h4>The Octocat</h4>
          <a href="http://github-media-downloads.s3.amazonaws.com/Octocats.zip"><img alt="Octocat" src="https://a248.e.akamai.net/assets.github.com/images/modules/about_page/octocat.png?1310104853" /></a>
          <a href="http://github-media-downloads.s3.amazonaws.com/Octocats.zip" class="minibutton btn-download download"><span><span class="icon"></span>Download</span></a>
        </li>
      </ul>
    </div>

    
    
    
    <span id='server_response_time' data-time='0.36979' data-host='fe8'></span>
  </body>
</html>

