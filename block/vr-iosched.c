


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>LG-P500-2.6.35-re-write/block/vr-iosched.c at master · franciscofranco/LG-P500-2.6.35-re-write</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="shortcut icon" href="/favicon.ico" type="image/x-icon" />

    
    

    <meta content="authenticity_token" name="csrf-param" />
<meta content="Y7SdKICFpfkzP7uYzLAnQ0O8/AqLfCYM4hYfxrmsuW8=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/stylesheets/bundles/github-16f02a2b1a2b7d2b6edf91eaaf072e87c70f95d2.css" media="screen" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/stylesheets/bundles/github2-d60e8ff9ae61ed2bf441f513d94ebd6d6145dd55.css" media="screen" rel="stylesheet" type="text/css" />
    

    <script src="https://a248.e.akamai.net/assets.github.com/javascripts/bundles/jquery-225576cef50ef2097c9f9fbcd8953c1572544611.js" type="text/javascript"></script>
    <script src="https://a248.e.akamai.net/assets.github.com/javascripts/bundles/github-353ded132c604f1bdf010516392d71052f37ffcf.js" type="text/javascript"></script>
    

      <link rel='permalink' href='/franciscofranco/LG-P500-2.6.35-re-write/blob/b0bb7b4c0b09f97728074fcff4ef50598a7f838d/block/vr-iosched.c'>
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
                    <a href="/franciscofranco/LG-P500-2.6.35-re-write/blob/master/block/vr-iosched.c" data-name="master" rel="nofollow">master</a>
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

        





<!-- block_view_fragment_key: views7/v8/blob:v19:a80b7b2bfcd9380098cb53b1103703b6 -->
  <div id="slider">

    <div class="breadcrumb" data-path="block/vr-iosched.c/">
      <b itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/franciscofranco/LG-P500-2.6.35-re-write/tree/b0bb7b4c0b09f97728074fcff4ef50598a7f838d" class="js-rewrite-sha" itemprop="url"><span itemprop="title">LG-P500-2.6.35-re-write</span></a></b> / <span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/franciscofranco/LG-P500-2.6.35-re-write/tree/b0bb7b4c0b09f97728074fcff4ef50598a7f838d/block" class="js-rewrite-sha" itemscope="url"><span itemprop="title">block</span></a></span> / <strong class="final-path">vr-iosched.c</strong> <span class="js-clippy mini-icon clippy " data-clipboard-text="block/vr-iosched.c" data-copied-hint="copied!" data-copy-hint="copy to clipboard"></span>
    </div>


      <div class="commit file-history-tease" data-path="block/vr-iosched.c/">
        <img class="main-avatar" height="24" src="https://secure.gravatar.com/avatar/06cac7b5dd29bffcaced2f3b02ce2c7d?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" width="24" />
        <span class="author"><a href="/franciscofranco">franciscofranco</a></span>
        <time class="js-relative-date" datetime="2011-11-10T19:21:58-08:00" title="2011-11-10 19:21:58">November 10, 2011</time>
        <div class="commit-title">
            <a href="/franciscofranco/LG-P500-2.6.35-re-write/commit/dccb19d183279e36a4db6b64ffc15adc99e6d0db" class="message">Revert "Ck2 patch"</a>
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
      <div class="frame frame-center" data-path="block/vr-iosched.c/" data-permalink-url="/franciscofranco/LG-P500-2.6.35-re-write/blob/b0bb7b4c0b09f97728074fcff4ef50598a7f838d/block/vr-iosched.c" data-title="LG-P500-2.6.35-re-write/block/vr-iosched.c at master · franciscofranco/LG-P500-2.6.35-re-write · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="mini-icon text-file"></b></span>
                <span class="mode" title="File Mode">100644</span>
                  <span>449 lines (373 sloc)</span>
                <span>9.902 kb</span>
              </div>
              <ul class="button-group actions">
                  <li>
                    <a class="grouped-button file-edit-link minibutton bigger lighter js-rewrite-sha" href="/franciscofranco/LG-P500-2.6.35-re-write/edit/b0bb7b4c0b09f97728074fcff4ef50598a7f838d/block/vr-iosched.c" data-method="post" rel="nofollow"><span>Edit this file</span></a>
                  </li>

                <li>
                  <a href="/franciscofranco/LG-P500-2.6.35-re-write/raw/master/block/vr-iosched.c" class="minibutton btn-raw grouped-button bigger lighter" id="raw-url"><span><span class="icon"></span>Raw</span></a>
                </li>
                  <li>
                    <a href="/franciscofranco/LG-P500-2.6.35-re-write/blame/master/block/vr-iosched.c" class="minibutton btn-blame grouped-button bigger lighter"><span><span class="icon"></span>Blame</span></a>
                  </li>
                <li>
                  <a href="/franciscofranco/LG-P500-2.6.35-re-write/commits/master/block/vr-iosched.c" class="minibutton btn-history grouped-button bigger lighter" rel="nofollow"><span><span class="icon"></span>History</span></a>
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
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
<span id="L432" rel="#L432">432</span>
<span id="L433" rel="#L433">433</span>
<span id="L434" rel="#L434">434</span>
<span id="L435" rel="#L435">435</span>
<span id="L436" rel="#L436">436</span>
<span id="L437" rel="#L437">437</span>
<span id="L438" rel="#L438">438</span>
<span id="L439" rel="#L439">439</span>
<span id="L440" rel="#L440">440</span>
<span id="L441" rel="#L441">441</span>
<span id="L442" rel="#L442">442</span>
<span id="L443" rel="#L443">443</span>
<span id="L444" rel="#L444">444</span>
<span id="L445" rel="#L445">445</span>
<span id="L446" rel="#L446">446</span>
<span id="L447" rel="#L447">447</span>
<span id="L448" rel="#L448">448</span>
</pre>
          </td>
          <td width="100%">
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm">* V(R) I/O Scheduler</span></div><div class='line' id='LC3'><span class="cm">*</span></div><div class='line' id='LC4'><span class="cm">* Copyright (C) 2007 Aaron Carroll &lt;aaronc@gelato.unsw.edu.au&gt;</span></div><div class='line' id='LC5'><span class="cm">*</span></div><div class='line' id='LC6'><span class="cm">*</span></div><div class='line' id='LC7'><span class="cm">* The algorithm:</span></div><div class='line' id='LC8'><span class="cm">*</span></div><div class='line' id='LC9'><span class="cm">* The next request is decided based on its distance from the last</span></div><div class='line' id='LC10'><span class="cm">* request, with a multiplicative penalty of `rev_penalty&#39; applied</span></div><div class='line' id='LC11'><span class="cm">* for reversing the head direction. A rev_penalty of 1 means SSTF</span></div><div class='line' id='LC12'><span class="cm">* behaviour. As this variable is increased, the algorithm approaches</span></div><div class='line' id='LC13'><span class="cm">* pure SCAN. Setting rev_penalty to 0 forces SCAN.</span></div><div class='line' id='LC14'><span class="cm">*</span></div><div class='line' id='LC15'><span class="cm">* Async and synch requests are not treated seperately. Instead we</span></div><div class='line' id='LC16'><span class="cm">* rely on deadlines to ensure fairness.</span></div><div class='line' id='LC17'><span class="cm">*</span></div><div class='line' id='LC18'><span class="cm">*/</span></div><div class='line' id='LC19'><span class="cp">#include &lt;linux/kernel.h&gt;</span></div><div class='line' id='LC20'><span class="cp">#include &lt;linux/fs.h&gt;</span></div><div class='line' id='LC21'><span class="cp">#include &lt;linux/blkdev.h&gt;</span></div><div class='line' id='LC22'><span class="cp">#include &lt;linux/elevator.h&gt;</span></div><div class='line' id='LC23'><span class="cp">#include &lt;linux/bio.h&gt;</span></div><div class='line' id='LC24'><span class="cp">#include &lt;linux/module.h&gt;</span></div><div class='line' id='LC25'><span class="cp">#include &lt;linux/slab.h&gt;</span></div><div class='line' id='LC26'><span class="cp">#include &lt;linux/init.h&gt;</span></div><div class='line' id='LC27'><span class="cp">#include &lt;linux/compiler.h&gt;</span></div><div class='line' id='LC28'><span class="cp">#include &lt;linux/rbtree.h&gt;</span></div><div class='line' id='LC29'><br/></div><div class='line' id='LC30'><span class="cp">#include &lt;asm/div64.h&gt;</span></div><div class='line' id='LC31'><br/></div><div class='line' id='LC32'><span class="k">enum</span> <span class="n">vr_data_dir</span> <span class="p">{</span></div><div class='line' id='LC33'><span class="n">ASYNC</span><span class="p">,</span></div><div class='line' id='LC34'><span class="n">SYNC</span><span class="p">,</span></div><div class='line' id='LC35'><span class="p">};</span></div><div class='line' id='LC36'><br/></div><div class='line' id='LC37'><span class="k">enum</span> <span class="n">vr_head_dir</span> <span class="p">{</span></div><div class='line' id='LC38'><span class="n">FORWARD</span><span class="p">,</span></div><div class='line' id='LC39'><span class="n">BACKWARD</span><span class="p">,</span></div><div class='line' id='LC40'><span class="p">};</span></div><div class='line' id='LC41'><br/></div><div class='line' id='LC42'><span class="k">static</span> <span class="k">const</span> <span class="kt">int</span> <span class="n">sync_expire</span> <span class="o">=</span> <span class="n">HZ</span> <span class="o">/</span> <span class="mi">2</span><span class="p">;</span> <span class="cm">/* max time before a sync is submitted. */</span></div><div class='line' id='LC43'><span class="k">static</span> <span class="k">const</span> <span class="kt">int</span> <span class="n">async_expire</span> <span class="o">=</span> <span class="mi">5</span> <span class="o">*</span> <span class="n">HZ</span><span class="p">;</span> <span class="cm">/* ditto for async, these limits are SOFT! */</span></div><div class='line' id='LC44'><span class="k">static</span> <span class="k">const</span> <span class="kt">int</span> <span class="n">fifo_batch</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC45'><span class="k">static</span> <span class="k">const</span> <span class="kt">int</span> <span class="n">rev_penalty</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span> <span class="cm">/* penalty for reversing head direction */</span></div><div class='line' id='LC46'><br/></div><div class='line' id='LC47'><span class="k">struct</span> <span class="n">vr_data</span> <span class="p">{</span></div><div class='line' id='LC48'><span class="k">struct</span> <span class="n">rb_root</span> <span class="n">sort_list</span><span class="p">;</span></div><div class='line' id='LC49'><span class="k">struct</span> <span class="n">list_head</span> <span class="n">fifo_list</span><span class="p">[</span><span class="mi">2</span><span class="p">];</span></div><div class='line' id='LC50'><br/></div><div class='line' id='LC51'><span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">next_rq</span><span class="p">;</span></div><div class='line' id='LC52'><span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">prev_rq</span><span class="p">;</span></div><div class='line' id='LC53'><br/></div><div class='line' id='LC54'><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">nbatched</span><span class="p">;</span></div><div class='line' id='LC55'><span class="n">sector_t</span> <span class="n">last_sector</span><span class="p">;</span> <span class="cm">/* head position */</span></div><div class='line' id='LC56'><span class="kt">int</span> <span class="n">head_dir</span><span class="p">;</span></div><div class='line' id='LC57'><br/></div><div class='line' id='LC58'><span class="cm">/* tunables */</span></div><div class='line' id='LC59'><span class="kt">int</span> <span class="n">fifo_expire</span><span class="p">[</span><span class="mi">2</span><span class="p">];</span></div><div class='line' id='LC60'><span class="kt">int</span> <span class="n">fifo_batch</span><span class="p">;</span></div><div class='line' id='LC61'><span class="kt">int</span> <span class="n">rev_penalty</span><span class="p">;</span></div><div class='line' id='LC62'><span class="p">};</span></div><div class='line' id='LC63'><br/></div><div class='line' id='LC64'><span class="k">static</span> <span class="kt">void</span> <span class="n">vr_move_request</span><span class="p">(</span><span class="k">struct</span> <span class="n">vr_data</span> <span class="o">*</span><span class="p">,</span> <span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="p">);</span></div><div class='line' id='LC65'><br/></div><div class='line' id='LC66'><span class="k">static</span> <span class="kr">inline</span> <span class="k">struct</span> <span class="n">vr_data</span> <span class="o">*</span></div><div class='line' id='LC67'><span class="nf">vr_get_data</span><span class="p">(</span><span class="k">struct</span> <span class="n">request_queue</span> <span class="o">*</span><span class="n">q</span><span class="p">)</span></div><div class='line' id='LC68'><span class="p">{</span></div><div class='line' id='LC69'><span class="k">return</span> <span class="n">q</span><span class="o">-&gt;</span><span class="n">elevator</span><span class="o">-&gt;</span><span class="n">elevator_data</span><span class="p">;</span></div><div class='line' id='LC70'><span class="p">}</span></div><div class='line' id='LC71'><br/></div><div class='line' id='LC72'><span class="k">static</span> <span class="kt">void</span></div><div class='line' id='LC73'><span class="nf">vr_add_rq_rb</span><span class="p">(</span><span class="k">struct</span> <span class="n">vr_data</span> <span class="o">*</span><span class="n">vd</span><span class="p">,</span> <span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">rq</span><span class="p">)</span></div><div class='line' id='LC74'><span class="p">{</span></div><div class='line' id='LC75'><span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">alias</span> <span class="o">=</span> <span class="n">elv_rb_add</span><span class="p">(</span><span class="o">&amp;</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">sort_list</span><span class="p">,</span> <span class="n">rq</span><span class="p">);</span></div><div class='line' id='LC76'><br/></div><div class='line' id='LC77'><span class="k">if</span> <span class="p">(</span><span class="n">unlikely</span><span class="p">(</span><span class="n">alias</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC78'><span class="n">vr_move_request</span><span class="p">(</span><span class="n">vd</span><span class="p">,</span> <span class="n">alias</span><span class="p">);</span></div><div class='line' id='LC79'><span class="n">alias</span> <span class="o">=</span> <span class="n">elv_rb_add</span><span class="p">(</span><span class="o">&amp;</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">sort_list</span><span class="p">,</span> <span class="n">rq</span><span class="p">);</span></div><div class='line' id='LC80'><span class="n">BUG_ON</span><span class="p">(</span><span class="n">alias</span><span class="p">);</span></div><div class='line' id='LC81'><span class="p">}</span></div><div class='line' id='LC82'><br/></div><div class='line' id='LC83'><span class="k">if</span> <span class="p">(</span><span class="n">blk_rq_pos</span><span class="p">(</span><span class="n">rq</span><span class="p">)</span> <span class="o">&gt;=</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">last_sector</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC84'><span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">next_rq</span> <span class="o">||</span> <span class="n">blk_rq_pos</span><span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">next_rq</span><span class="p">)</span> <span class="o">&gt;</span> <span class="n">blk_rq_pos</span><span class="p">(</span><span class="n">rq</span><span class="p">))</span></div><div class='line' id='LC85'><span class="n">vd</span><span class="o">-&gt;</span><span class="n">next_rq</span> <span class="o">=</span> <span class="n">rq</span><span class="p">;</span></div><div class='line' id='LC86'><span class="p">}</span></div><div class='line' id='LC87'><span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC88'><span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">prev_rq</span> <span class="o">||</span> <span class="n">blk_rq_pos</span><span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">prev_rq</span><span class="p">)</span> <span class="o">&lt;</span> <span class="n">blk_rq_pos</span><span class="p">(</span><span class="n">rq</span><span class="p">))</span></div><div class='line' id='LC89'><span class="n">vd</span><span class="o">-&gt;</span><span class="n">prev_rq</span> <span class="o">=</span> <span class="n">rq</span><span class="p">;</span></div><div class='line' id='LC90'><span class="p">}</span></div><div class='line' id='LC91'><br/></div><div class='line' id='LC92'><span class="n">BUG_ON</span><span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">next_rq</span> <span class="o">&amp;&amp;</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">next_rq</span> <span class="o">==</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">prev_rq</span><span class="p">);</span></div><div class='line' id='LC93'><span class="n">BUG_ON</span><span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">next_rq</span> <span class="o">&amp;&amp;</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">prev_rq</span> <span class="o">&amp;&amp;</span> <span class="n">blk_rq_pos</span><span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">next_rq</span><span class="p">)</span> <span class="o">&lt;</span> <span class="n">blk_rq_pos</span><span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">prev_rq</span><span class="p">));</span></div><div class='line' id='LC94'><span class="p">}</span></div><div class='line' id='LC95'><br/></div><div class='line' id='LC96'><span class="k">static</span> <span class="kt">void</span></div><div class='line' id='LC97'><span class="nf">vr_del_rq_rb</span><span class="p">(</span><span class="k">struct</span> <span class="n">vr_data</span> <span class="o">*</span><span class="n">vd</span><span class="p">,</span> <span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">rq</span><span class="p">)</span></div><div class='line' id='LC98'><span class="p">{</span></div><div class='line' id='LC99'><span class="cm">/*</span></div><div class='line' id='LC100'><span class="cm">* We might be deleting our cached next request.</span></div><div class='line' id='LC101'><span class="cm">* If so, find its sucessor.</span></div><div class='line' id='LC102'><span class="cm">*/</span></div><div class='line' id='LC103'><br/></div><div class='line' id='LC104'><span class="k">if</span> <span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">next_rq</span> <span class="o">==</span> <span class="n">rq</span><span class="p">)</span></div><div class='line' id='LC105'><span class="n">vd</span><span class="o">-&gt;</span><span class="n">next_rq</span> <span class="o">=</span> <span class="n">elv_rb_latter_request</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span> <span class="n">rq</span><span class="p">);</span></div><div class='line' id='LC106'><span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">prev_rq</span> <span class="o">==</span> <span class="n">rq</span><span class="p">)</span></div><div class='line' id='LC107'><span class="n">vd</span><span class="o">-&gt;</span><span class="n">prev_rq</span> <span class="o">=</span> <span class="n">elv_rb_former_request</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span> <span class="n">rq</span><span class="p">);</span></div><div class='line' id='LC108'><br/></div><div class='line' id='LC109'><span class="n">BUG_ON</span><span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">next_rq</span> <span class="o">&amp;&amp;</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">next_rq</span> <span class="o">==</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">prev_rq</span><span class="p">);</span></div><div class='line' id='LC110'><span class="n">BUG_ON</span><span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">next_rq</span> <span class="o">&amp;&amp;</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">prev_rq</span> <span class="o">&amp;&amp;</span> <span class="n">blk_rq_pos</span><span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">next_rq</span><span class="p">)</span> <span class="o">&lt;</span> <span class="n">blk_rq_pos</span><span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">prev_rq</span><span class="p">));</span></div><div class='line' id='LC111'><br/></div><div class='line' id='LC112'><span class="n">elv_rb_del</span><span class="p">(</span><span class="o">&amp;</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">sort_list</span><span class="p">,</span> <span class="n">rq</span><span class="p">);</span></div><div class='line' id='LC113'><span class="p">}</span></div><div class='line' id='LC114'><br/></div><div class='line' id='LC115'><span class="cm">/*</span></div><div class='line' id='LC116'><span class="cm">* add rq to rbtree and fifo</span></div><div class='line' id='LC117'><span class="cm">*/</span></div><div class='line' id='LC118'><span class="k">static</span> <span class="kt">void</span></div><div class='line' id='LC119'><span class="nf">vr_add_request</span><span class="p">(</span><span class="k">struct</span> <span class="n">request_queue</span> <span class="o">*</span><span class="n">q</span><span class="p">,</span> <span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">rq</span><span class="p">)</span></div><div class='line' id='LC120'><span class="p">{</span></div><div class='line' id='LC121'><span class="k">struct</span> <span class="n">vr_data</span> <span class="o">*</span><span class="n">vd</span> <span class="o">=</span> <span class="n">vr_get_data</span><span class="p">(</span><span class="n">q</span><span class="p">);</span></div><div class='line' id='LC122'><span class="k">const</span> <span class="kt">int</span> <span class="n">dir</span> <span class="o">=</span> <span class="n">rq_is_sync</span><span class="p">(</span><span class="n">rq</span><span class="p">);</span></div><div class='line' id='LC123'><br/></div><div class='line' id='LC124'><span class="n">vr_add_rq_rb</span><span class="p">(</span><span class="n">vd</span><span class="p">,</span> <span class="n">rq</span><span class="p">);</span></div><div class='line' id='LC125'><br/></div><div class='line' id='LC126'><span class="k">if</span> <span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">fifo_expire</span><span class="p">[</span><span class="n">dir</span><span class="p">])</span> <span class="p">{</span></div><div class='line' id='LC127'><span class="n">rq_set_fifo_time</span><span class="p">(</span><span class="n">rq</span><span class="p">,</span> <span class="n">jiffies</span> <span class="o">+</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">fifo_expire</span><span class="p">[</span><span class="n">dir</span><span class="p">]);</span></div><div class='line' id='LC128'><span class="n">list_add_tail</span><span class="p">(</span><span class="o">&amp;</span><span class="n">rq</span><span class="o">-&gt;</span><span class="n">queuelist</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">fifo_list</span><span class="p">[</span><span class="n">dir</span><span class="p">]);</span></div><div class='line' id='LC129'><span class="p">}</span></div><div class='line' id='LC130'><span class="p">}</span></div><div class='line' id='LC131'><br/></div><div class='line' id='LC132'><span class="cm">/*</span></div><div class='line' id='LC133'><span class="cm">* remove rq from rbtree and fifo.</span></div><div class='line' id='LC134'><span class="cm">*/</span></div><div class='line' id='LC135'><span class="k">static</span> <span class="kt">void</span></div><div class='line' id='LC136'><span class="nf">vr_remove_request</span><span class="p">(</span><span class="k">struct</span> <span class="n">request_queue</span> <span class="o">*</span><span class="n">q</span><span class="p">,</span> <span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">rq</span><span class="p">)</span></div><div class='line' id='LC137'><span class="p">{</span></div><div class='line' id='LC138'><span class="k">struct</span> <span class="n">vr_data</span> <span class="o">*</span><span class="n">vd</span> <span class="o">=</span> <span class="n">vr_get_data</span><span class="p">(</span><span class="n">q</span><span class="p">);</span></div><div class='line' id='LC139'><br/></div><div class='line' id='LC140'><span class="n">rq_fifo_clear</span><span class="p">(</span><span class="n">rq</span><span class="p">);</span></div><div class='line' id='LC141'><span class="n">vr_del_rq_rb</span><span class="p">(</span><span class="n">vd</span><span class="p">,</span> <span class="n">rq</span><span class="p">);</span></div><div class='line' id='LC142'><span class="p">}</span></div><div class='line' id='LC143'><br/></div><div class='line' id='LC144'><span class="k">static</span> <span class="kt">int</span></div><div class='line' id='LC145'><span class="nf">vr_merge</span><span class="p">(</span><span class="k">struct</span> <span class="n">request_queue</span> <span class="o">*</span><span class="n">q</span><span class="p">,</span> <span class="k">struct</span> <span class="n">request</span> <span class="o">**</span><span class="n">rqp</span><span class="p">,</span> <span class="k">struct</span> <span class="n">bio</span> <span class="o">*</span><span class="n">bio</span><span class="p">)</span></div><div class='line' id='LC146'><span class="p">{</span></div><div class='line' id='LC147'><span class="n">sector_t</span> <span class="n">sector</span> <span class="o">=</span> <span class="n">bio</span><span class="o">-&gt;</span><span class="n">bi_sector</span> <span class="o">+</span> <span class="n">bio_sectors</span><span class="p">(</span><span class="n">bio</span><span class="p">);</span></div><div class='line' id='LC148'><span class="k">struct</span> <span class="n">vr_data</span> <span class="o">*</span><span class="n">vd</span> <span class="o">=</span> <span class="n">vr_get_data</span><span class="p">(</span><span class="n">q</span><span class="p">);</span></div><div class='line' id='LC149'><span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">rq</span> <span class="o">=</span> <span class="n">elv_rb_find</span><span class="p">(</span><span class="o">&amp;</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">sort_list</span><span class="p">,</span> <span class="n">sector</span><span class="p">);</span></div><div class='line' id='LC150'><br/></div><div class='line' id='LC151'><span class="k">if</span> <span class="p">(</span><span class="n">rq</span> <span class="o">&amp;&amp;</span> <span class="n">elv_rq_merge_ok</span><span class="p">(</span><span class="n">rq</span><span class="p">,</span> <span class="n">bio</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC152'><span class="o">*</span><span class="n">rqp</span> <span class="o">=</span> <span class="n">rq</span><span class="p">;</span></div><div class='line' id='LC153'><span class="k">return</span> <span class="n">ELEVATOR_FRONT_MERGE</span><span class="p">;</span></div><div class='line' id='LC154'><span class="p">}</span></div><div class='line' id='LC155'><span class="k">return</span> <span class="n">ELEVATOR_NO_MERGE</span><span class="p">;</span></div><div class='line' id='LC156'><span class="p">}</span></div><div class='line' id='LC157'><br/></div><div class='line' id='LC158'><span class="k">static</span> <span class="kt">void</span></div><div class='line' id='LC159'><span class="nf">vr_merged_request</span><span class="p">(</span><span class="k">struct</span> <span class="n">request_queue</span> <span class="o">*</span><span class="n">q</span><span class="p">,</span> <span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">req</span><span class="p">,</span> <span class="kt">int</span> <span class="n">type</span><span class="p">)</span></div><div class='line' id='LC160'><span class="p">{</span></div><div class='line' id='LC161'><span class="k">struct</span> <span class="n">vr_data</span> <span class="o">*</span><span class="n">vd</span> <span class="o">=</span> <span class="n">vr_get_data</span><span class="p">(</span><span class="n">q</span><span class="p">);</span></div><div class='line' id='LC162'><br/></div><div class='line' id='LC163'><span class="cm">/*</span></div><div class='line' id='LC164'><span class="cm">* if the merge was a front merge, we need to reposition request</span></div><div class='line' id='LC165'><span class="cm">*/</span></div><div class='line' id='LC166'><span class="k">if</span> <span class="p">(</span><span class="n">type</span> <span class="o">==</span> <span class="n">ELEVATOR_FRONT_MERGE</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC167'><span class="n">vr_del_rq_rb</span><span class="p">(</span><span class="n">vd</span><span class="p">,</span> <span class="n">req</span><span class="p">);</span></div><div class='line' id='LC168'><span class="n">vr_add_rq_rb</span><span class="p">(</span><span class="n">vd</span><span class="p">,</span> <span class="n">req</span><span class="p">);</span></div><div class='line' id='LC169'><span class="p">}</span></div><div class='line' id='LC170'><span class="p">}</span></div><div class='line' id='LC171'><br/></div><div class='line' id='LC172'><span class="k">static</span> <span class="kt">void</span></div><div class='line' id='LC173'><span class="nf">vr_merged_requests</span><span class="p">(</span><span class="k">struct</span> <span class="n">request_queue</span> <span class="o">*</span><span class="n">q</span><span class="p">,</span> <span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">rq</span><span class="p">,</span></div><div class='line' id='LC174'><span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">next</span><span class="p">)</span></div><div class='line' id='LC175'><span class="p">{</span></div><div class='line' id='LC176'><span class="cm">/*</span></div><div class='line' id='LC177'><span class="cm">* if next expires before rq, assign its expire time to rq</span></div><div class='line' id='LC178'><span class="cm">* and move into next position (next will be deleted) in fifo</span></div><div class='line' id='LC179'><span class="cm">*/</span></div><div class='line' id='LC180'><span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">list_empty</span><span class="p">(</span><span class="o">&amp;</span><span class="n">rq</span><span class="o">-&gt;</span><span class="n">queuelist</span><span class="p">)</span> <span class="o">&amp;&amp;</span> <span class="o">!</span><span class="n">list_empty</span><span class="p">(</span><span class="o">&amp;</span><span class="n">next</span><span class="o">-&gt;</span><span class="n">queuelist</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC181'><span class="k">if</span> <span class="p">(</span><span class="n">time_before</span><span class="p">(</span><span class="n">rq_fifo_time</span><span class="p">(</span><span class="n">next</span><span class="p">),</span> <span class="n">rq_fifo_time</span><span class="p">(</span><span class="n">rq</span><span class="p">)))</span> <span class="p">{</span></div><div class='line' id='LC182'><span class="n">list_move</span><span class="p">(</span><span class="o">&amp;</span><span class="n">rq</span><span class="o">-&gt;</span><span class="n">queuelist</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">next</span><span class="o">-&gt;</span><span class="n">queuelist</span><span class="p">);</span></div><div class='line' id='LC183'><span class="n">rq_set_fifo_time</span><span class="p">(</span><span class="n">rq</span><span class="p">,</span> <span class="n">rq_fifo_time</span><span class="p">(</span><span class="n">next</span><span class="p">));</span></div><div class='line' id='LC184'><span class="p">}</span></div><div class='line' id='LC185'><span class="p">}</span></div><div class='line' id='LC186'><br/></div><div class='line' id='LC187'><span class="n">vr_remove_request</span><span class="p">(</span><span class="n">q</span><span class="p">,</span> <span class="n">next</span><span class="p">);</span></div><div class='line' id='LC188'><span class="p">}</span></div><div class='line' id='LC189'><br/></div><div class='line' id='LC190'><span class="cm">/*</span></div><div class='line' id='LC191'><span class="cm">* move an entry to dispatch queue</span></div><div class='line' id='LC192'><span class="cm">*/</span></div><div class='line' id='LC193'><span class="k">static</span> <span class="kt">void</span></div><div class='line' id='LC194'><span class="nf">vr_move_request</span><span class="p">(</span><span class="k">struct</span> <span class="n">vr_data</span> <span class="o">*</span><span class="n">vd</span><span class="p">,</span> <span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">rq</span><span class="p">)</span></div><div class='line' id='LC195'><span class="p">{</span></div><div class='line' id='LC196'><span class="k">struct</span> <span class="n">request_queue</span> <span class="o">*</span><span class="n">q</span> <span class="o">=</span> <span class="n">rq</span><span class="o">-&gt;</span><span class="n">q</span><span class="p">;</span></div><div class='line' id='LC197'><br/></div><div class='line' id='LC198'><span class="k">if</span> <span class="p">(</span><span class="n">blk_rq_pos</span><span class="p">(</span><span class="n">rq</span><span class="p">)</span> <span class="o">&gt;</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">last_sector</span><span class="p">)</span></div><div class='line' id='LC199'><span class="n">vd</span><span class="o">-&gt;</span><span class="n">head_dir</span> <span class="o">=</span> <span class="n">FORWARD</span><span class="p">;</span></div><div class='line' id='LC200'><span class="k">else</span></div><div class='line' id='LC201'><span class="n">vd</span><span class="o">-&gt;</span><span class="n">head_dir</span> <span class="o">=</span> <span class="n">BACKWARD</span><span class="p">;</span></div><div class='line' id='LC202'><br/></div><div class='line' id='LC203'><span class="n">vd</span><span class="o">-&gt;</span><span class="n">last_sector</span> <span class="o">=</span> <span class="n">blk_rq_pos</span><span class="p">(</span><span class="n">rq</span><span class="p">);</span></div><div class='line' id='LC204'><span class="n">vd</span><span class="o">-&gt;</span><span class="n">next_rq</span> <span class="o">=</span> <span class="n">elv_rb_latter_request</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span> <span class="n">rq</span><span class="p">);</span></div><div class='line' id='LC205'><span class="n">vd</span><span class="o">-&gt;</span><span class="n">prev_rq</span> <span class="o">=</span> <span class="n">elv_rb_former_request</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span> <span class="n">rq</span><span class="p">);</span></div><div class='line' id='LC206'><br/></div><div class='line' id='LC207'><span class="n">BUG_ON</span><span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">next_rq</span> <span class="o">&amp;&amp;</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">next_rq</span> <span class="o">==</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">prev_rq</span><span class="p">);</span></div><div class='line' id='LC208'><br/></div><div class='line' id='LC209'><span class="n">vr_remove_request</span><span class="p">(</span><span class="n">q</span><span class="p">,</span> <span class="n">rq</span><span class="p">);</span></div><div class='line' id='LC210'><span class="n">elv_dispatch_add_tail</span><span class="p">(</span><span class="n">q</span><span class="p">,</span> <span class="n">rq</span><span class="p">);</span></div><div class='line' id='LC211'><span class="n">vd</span><span class="o">-&gt;</span><span class="n">nbatched</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC212'><span class="p">}</span></div><div class='line' id='LC213'><br/></div><div class='line' id='LC214'><span class="cm">/*</span></div><div class='line' id='LC215'><span class="cm">* get the first expired request in direction ddir</span></div><div class='line' id='LC216'><span class="cm">*/</span></div><div class='line' id='LC217'><span class="k">static</span> <span class="k">struct</span> <span class="n">request</span> <span class="o">*</span></div><div class='line' id='LC218'><span class="nf">vr_expired_request</span><span class="p">(</span><span class="k">struct</span> <span class="n">vr_data</span> <span class="o">*</span><span class="n">vd</span><span class="p">,</span> <span class="kt">int</span> <span class="n">ddir</span><span class="p">)</span></div><div class='line' id='LC219'><span class="p">{</span></div><div class='line' id='LC220'><span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">rq</span><span class="p">;</span></div><div class='line' id='LC221'><br/></div><div class='line' id='LC222'><span class="k">if</span> <span class="p">(</span><span class="n">list_empty</span><span class="p">(</span><span class="o">&amp;</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">fifo_list</span><span class="p">[</span><span class="n">ddir</span><span class="p">]))</span></div><div class='line' id='LC223'><span class="k">return</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC224'><br/></div><div class='line' id='LC225'><span class="n">rq</span> <span class="o">=</span> <span class="n">rq_entry_fifo</span><span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">fifo_list</span><span class="p">[</span><span class="n">ddir</span><span class="p">].</span><span class="n">next</span><span class="p">);</span></div><div class='line' id='LC226'><span class="k">if</span> <span class="p">(</span><span class="n">time_after</span><span class="p">(</span><span class="n">jiffies</span><span class="p">,</span> <span class="n">rq_fifo_time</span><span class="p">(</span><span class="n">rq</span><span class="p">)))</span></div><div class='line' id='LC227'><span class="k">return</span> <span class="n">rq</span><span class="p">;</span></div><div class='line' id='LC228'><br/></div><div class='line' id='LC229'><span class="k">return</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC230'><span class="p">}</span></div><div class='line' id='LC231'><br/></div><div class='line' id='LC232'><span class="cm">/*</span></div><div class='line' id='LC233'><span class="cm">* Returns the oldest expired request</span></div><div class='line' id='LC234'><span class="cm">*/</span></div><div class='line' id='LC235'><span class="k">static</span> <span class="k">struct</span> <span class="n">request</span> <span class="o">*</span></div><div class='line' id='LC236'><span class="nf">vr_check_fifo</span><span class="p">(</span><span class="k">struct</span> <span class="n">vr_data</span> <span class="o">*</span><span class="n">vd</span><span class="p">)</span></div><div class='line' id='LC237'><span class="p">{</span></div><div class='line' id='LC238'><span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">rq_sync</span> <span class="o">=</span> <span class="n">vr_expired_request</span><span class="p">(</span><span class="n">vd</span><span class="p">,</span> <span class="n">SYNC</span><span class="p">);</span></div><div class='line' id='LC239'><span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">rq_async</span> <span class="o">=</span> <span class="n">vr_expired_request</span><span class="p">(</span><span class="n">vd</span><span class="p">,</span> <span class="n">ASYNC</span><span class="p">);</span></div><div class='line' id='LC240'><br/></div><div class='line' id='LC241'><span class="k">if</span> <span class="p">(</span><span class="n">rq_async</span> <span class="o">&amp;&amp;</span> <span class="n">rq_sync</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC242'><span class="k">if</span> <span class="p">(</span><span class="n">time_after</span><span class="p">(</span><span class="n">rq_fifo_time</span><span class="p">(</span><span class="n">rq_async</span><span class="p">),</span> <span class="n">rq_fifo_time</span><span class="p">(</span><span class="n">rq_sync</span><span class="p">)))</span></div><div class='line' id='LC243'><span class="k">return</span> <span class="n">rq_sync</span><span class="p">;</span></div><div class='line' id='LC244'><span class="p">}</span></div><div class='line' id='LC245'><span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">rq_sync</span><span class="p">)</span></div><div class='line' id='LC246'><span class="k">return</span> <span class="n">rq_sync</span><span class="p">;</span></div><div class='line' id='LC247'><br/></div><div class='line' id='LC248'><span class="k">return</span> <span class="n">rq_async</span><span class="p">;</span></div><div class='line' id='LC249'><span class="p">}</span></div><div class='line' id='LC250'><br/></div><div class='line' id='LC251'><span class="cm">/*</span></div><div class='line' id='LC252'><span class="cm">* Return the request with the lowest penalty</span></div><div class='line' id='LC253'><span class="cm">*/</span></div><div class='line' id='LC254'><span class="k">static</span> <span class="k">struct</span> <span class="n">request</span> <span class="o">*</span></div><div class='line' id='LC255'><span class="nf">vr_choose_request</span><span class="p">(</span><span class="k">struct</span> <span class="n">vr_data</span> <span class="o">*</span><span class="n">vd</span><span class="p">)</span></div><div class='line' id='LC256'><span class="p">{</span></div><div class='line' id='LC257'><span class="kt">int</span> <span class="n">penalty</span> <span class="o">=</span> <span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">rev_penalty</span><span class="p">)</span> <span class="o">?</span> <span class="o">:</span> <span class="n">INT_MAX</span><span class="p">;</span></div><div class='line' id='LC258'><span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">next</span> <span class="o">=</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">next_rq</span><span class="p">;</span></div><div class='line' id='LC259'><span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">prev</span> <span class="o">=</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">prev_rq</span><span class="p">;</span></div><div class='line' id='LC260'><span class="n">sector_t</span> <span class="n">next_pen</span><span class="p">,</span> <span class="n">prev_pen</span><span class="p">;</span></div><div class='line' id='LC261'><br/></div><div class='line' id='LC262'><span class="n">BUG_ON</span><span class="p">(</span><span class="n">prev</span> <span class="o">&amp;&amp;</span> <span class="n">prev</span> <span class="o">==</span> <span class="n">next</span><span class="p">);</span></div><div class='line' id='LC263'><br/></div><div class='line' id='LC264'><span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">prev</span><span class="p">)</span></div><div class='line' id='LC265'><span class="k">return</span> <span class="n">next</span><span class="p">;</span></div><div class='line' id='LC266'><span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">next</span><span class="p">)</span></div><div class='line' id='LC267'><span class="k">return</span> <span class="n">prev</span><span class="p">;</span></div><div class='line' id='LC268'><br/></div><div class='line' id='LC269'><span class="cm">/* At this point both prev and next are defined and distinct */</span></div><div class='line' id='LC270'><br/></div><div class='line' id='LC271'><span class="n">next_pen</span> <span class="o">=</span> <span class="n">blk_rq_pos</span><span class="p">(</span><span class="n">next</span><span class="p">)</span> <span class="o">-</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">last_sector</span><span class="p">;</span></div><div class='line' id='LC272'><span class="n">prev_pen</span> <span class="o">=</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">last_sector</span> <span class="o">-</span> <span class="n">blk_rq_pos</span><span class="p">(</span><span class="n">prev</span><span class="p">);</span></div><div class='line' id='LC273'><br/></div><div class='line' id='LC274'><span class="k">if</span> <span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">head_dir</span> <span class="o">==</span> <span class="n">FORWARD</span><span class="p">)</span></div><div class='line' id='LC275'><span class="n">next_pen</span> <span class="o">=</span> <span class="n">do_div</span><span class="p">(</span><span class="n">next_pen</span><span class="p">,</span> <span class="n">penalty</span><span class="p">);</span></div><div class='line' id='LC276'><span class="k">else</span></div><div class='line' id='LC277'><span class="n">prev_pen</span> <span class="o">=</span> <span class="n">do_div</span><span class="p">(</span><span class="n">prev_pen</span><span class="p">,</span> <span class="n">penalty</span><span class="p">);</span></div><div class='line' id='LC278'><br/></div><div class='line' id='LC279'><span class="k">if</span> <span class="p">(</span><span class="n">next_pen</span> <span class="o">&lt;=</span> <span class="n">prev_pen</span><span class="p">)</span></div><div class='line' id='LC280'><span class="k">return</span> <span class="n">next</span><span class="p">;</span></div><div class='line' id='LC281'><br/></div><div class='line' id='LC282'><span class="k">return</span> <span class="n">prev</span><span class="p">;</span></div><div class='line' id='LC283'><span class="p">}</span></div><div class='line' id='LC284'><br/></div><div class='line' id='LC285'><span class="k">static</span> <span class="kt">int</span></div><div class='line' id='LC286'><span class="nf">vr_dispatch_requests</span><span class="p">(</span><span class="k">struct</span> <span class="n">request_queue</span> <span class="o">*</span><span class="n">q</span><span class="p">,</span> <span class="kt">int</span> <span class="n">force</span><span class="p">)</span></div><div class='line' id='LC287'><span class="p">{</span></div><div class='line' id='LC288'><span class="k">struct</span> <span class="n">vr_data</span> <span class="o">*</span><span class="n">vd</span> <span class="o">=</span> <span class="n">vr_get_data</span><span class="p">(</span><span class="n">q</span><span class="p">);</span></div><div class='line' id='LC289'><span class="k">struct</span> <span class="n">request</span> <span class="o">*</span><span class="n">rq</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC290'><br/></div><div class='line' id='LC291'><span class="cm">/* Check for and issue expired requests */</span></div><div class='line' id='LC292'><span class="k">if</span> <span class="p">(</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">nbatched</span> <span class="o">&gt;</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">fifo_batch</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC293'><span class="n">vd</span><span class="o">-&gt;</span><span class="n">nbatched</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC294'><span class="n">rq</span> <span class="o">=</span> <span class="n">vr_check_fifo</span><span class="p">(</span><span class="n">vd</span><span class="p">);</span></div><div class='line' id='LC295'><span class="p">}</span></div><div class='line' id='LC296'><br/></div><div class='line' id='LC297'><span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">rq</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC298'><span class="n">rq</span> <span class="o">=</span> <span class="n">vr_choose_request</span><span class="p">(</span><span class="n">vd</span><span class="p">);</span></div><div class='line' id='LC299'><span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">rq</span><span class="p">)</span></div><div class='line' id='LC300'><span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC301'><span class="p">}</span></div><div class='line' id='LC302'><br/></div><div class='line' id='LC303'><span class="n">vr_move_request</span><span class="p">(</span><span class="n">vd</span><span class="p">,</span> <span class="n">rq</span><span class="p">);</span></div><div class='line' id='LC304'><br/></div><div class='line' id='LC305'><span class="k">return</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC306'><span class="p">}</span></div><div class='line' id='LC307'><br/></div><div class='line' id='LC308'><span class="k">static</span> <span class="kt">int</span></div><div class='line' id='LC309'><span class="nf">vr_queue_empty</span><span class="p">(</span><span class="k">struct</span> <span class="n">request_queue</span> <span class="o">*</span><span class="n">q</span><span class="p">)</span></div><div class='line' id='LC310'><span class="p">{</span></div><div class='line' id='LC311'><span class="k">struct</span> <span class="n">vr_data</span> <span class="o">*</span><span class="n">vd</span> <span class="o">=</span> <span class="n">vr_get_data</span><span class="p">(</span><span class="n">q</span><span class="p">);</span></div><div class='line' id='LC312'><span class="k">return</span> <span class="n">RB_EMPTY_ROOT</span><span class="p">(</span><span class="o">&amp;</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">sort_list</span><span class="p">);</span></div><div class='line' id='LC313'><span class="p">}</span></div><div class='line' id='LC314'><br/></div><div class='line' id='LC315'><span class="k">static</span> <span class="kt">void</span></div><div class='line' id='LC316'><span class="nf">vr_exit_queue</span><span class="p">(</span><span class="k">struct</span> <span class="n">elevator_queue</span> <span class="o">*</span><span class="n">e</span><span class="p">)</span></div><div class='line' id='LC317'><span class="p">{</span></div><div class='line' id='LC318'><span class="k">struct</span> <span class="n">vr_data</span> <span class="o">*</span><span class="n">vd</span> <span class="o">=</span> <span class="n">e</span><span class="o">-&gt;</span><span class="n">elevator_data</span><span class="p">;</span></div><div class='line' id='LC319'><span class="n">BUG_ON</span><span class="p">(</span><span class="o">!</span><span class="n">RB_EMPTY_ROOT</span><span class="p">(</span><span class="o">&amp;</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">sort_list</span><span class="p">));</span></div><div class='line' id='LC320'><span class="n">kfree</span><span class="p">(</span><span class="n">vd</span><span class="p">);</span></div><div class='line' id='LC321'><span class="p">}</span></div><div class='line' id='LC322'><br/></div><div class='line' id='LC323'><span class="cm">/*</span></div><div class='line' id='LC324'><span class="cm">* initialize elevator private data (vr_data).</span></div><div class='line' id='LC325'><span class="cm">*/</span></div><div class='line' id='LC326'><span class="k">static</span> <span class="kt">void</span> <span class="o">*</span><span class="nf">vr_init_queue</span><span class="p">(</span><span class="k">struct</span> <span class="n">request_queue</span> <span class="o">*</span><span class="n">q</span><span class="p">)</span></div><div class='line' id='LC327'><span class="p">{</span></div><div class='line' id='LC328'><span class="k">struct</span> <span class="n">vr_data</span> <span class="o">*</span><span class="n">vd</span><span class="p">;</span></div><div class='line' id='LC329'><br/></div><div class='line' id='LC330'><span class="n">vd</span> <span class="o">=</span> <span class="n">kmalloc_node</span><span class="p">(</span><span class="k">sizeof</span><span class="p">(</span><span class="o">*</span><span class="n">vd</span><span class="p">),</span> <span class="n">GFP_KERNEL</span> <span class="o">|</span> <span class="n">__GFP_ZERO</span><span class="p">,</span> <span class="n">q</span><span class="o">-&gt;</span><span class="n">node</span><span class="p">);</span></div><div class='line' id='LC331'><span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">vd</span><span class="p">)</span></div><div class='line' id='LC332'><span class="k">return</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC333'><br/></div><div class='line' id='LC334'><span class="n">INIT_LIST_HEAD</span><span class="p">(</span><span class="o">&amp;</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">fifo_list</span><span class="p">[</span><span class="n">SYNC</span><span class="p">]);</span></div><div class='line' id='LC335'><span class="n">INIT_LIST_HEAD</span><span class="p">(</span><span class="o">&amp;</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">fifo_list</span><span class="p">[</span><span class="n">ASYNC</span><span class="p">]);</span></div><div class='line' id='LC336'><span class="n">vd</span><span class="o">-&gt;</span><span class="n">sort_list</span> <span class="o">=</span> <span class="n">RB_ROOT</span><span class="p">;</span></div><div class='line' id='LC337'><span class="n">vd</span><span class="o">-&gt;</span><span class="n">fifo_expire</span><span class="p">[</span><span class="n">SYNC</span><span class="p">]</span> <span class="o">=</span> <span class="n">sync_expire</span><span class="p">;</span></div><div class='line' id='LC338'><span class="n">vd</span><span class="o">-&gt;</span><span class="n">fifo_expire</span><span class="p">[</span><span class="n">ASYNC</span><span class="p">]</span> <span class="o">=</span> <span class="n">async_expire</span><span class="p">;</span></div><div class='line' id='LC339'><span class="n">vd</span><span class="o">-&gt;</span><span class="n">fifo_batch</span> <span class="o">=</span> <span class="n">fifo_batch</span><span class="p">;</span></div><div class='line' id='LC340'><span class="n">vd</span><span class="o">-&gt;</span><span class="n">rev_penalty</span> <span class="o">=</span> <span class="n">rev_penalty</span><span class="p">;</span></div><div class='line' id='LC341'><span class="k">return</span> <span class="n">vd</span><span class="p">;</span></div><div class='line' id='LC342'><span class="p">}</span></div><div class='line' id='LC343'><br/></div><div class='line' id='LC344'><span class="cm">/*</span></div><div class='line' id='LC345'><span class="cm">* sysfs parts below</span></div><div class='line' id='LC346'><span class="cm">*/</span></div><div class='line' id='LC347'><br/></div><div class='line' id='LC348'><span class="k">static</span> <span class="kt">ssize_t</span></div><div class='line' id='LC349'><span class="nf">vr_var_show</span><span class="p">(</span><span class="kt">int</span> <span class="n">var</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">page</span><span class="p">)</span></div><div class='line' id='LC350'><span class="p">{</span></div><div class='line' id='LC351'><span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">page</span><span class="p">,</span> <span class="s">&quot;%d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">var</span><span class="p">);</span></div><div class='line' id='LC352'><span class="p">}</span></div><div class='line' id='LC353'><br/></div><div class='line' id='LC354'><span class="k">static</span> <span class="kt">ssize_t</span></div><div class='line' id='LC355'><span class="nf">vr_var_store</span><span class="p">(</span><span class="kt">int</span> <span class="o">*</span><span class="n">var</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">page</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC356'><span class="p">{</span></div><div class='line' id='LC357'><span class="o">*</span><span class="n">var</span> <span class="o">=</span> <span class="n">simple_strtol</span><span class="p">(</span><span class="n">page</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="mi">10</span><span class="p">);</span></div><div class='line' id='LC358'><span class="k">return</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC359'><span class="p">}</span></div><div class='line' id='LC360'><br/></div><div class='line' id='LC361'><span class="cp">#define SHOW_FUNCTION(__FUNC, __VAR, __CONV) \</span></div><div class='line' id='LC362'><span class="cp">static ssize_t __FUNC(struct elevator_queue *e, char *page) \</span></div><div class='line' id='LC363'><span class="cp">{ \</span></div><div class='line' id='LC364'><span class="cp">struct vr_data *vd = e-&gt;elevator_data; \</span></div><div class='line' id='LC365'><span class="cp">int __data = __VAR; \</span></div><div class='line' id='LC366'><span class="cp">if (__CONV) \</span></div><div class='line' id='LC367'><span class="cp">__data = jiffies_to_msecs(__data); \</span></div><div class='line' id='LC368'><span class="cp">return vr_var_show(__data, (page)); \</span></div><div class='line' id='LC369'><span class="cp">}</span></div><div class='line' id='LC370'><span class="n">SHOW_FUNCTION</span><span class="p">(</span><span class="n">vr_sync_expire_show</span><span class="p">,</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">fifo_expire</span><span class="p">[</span><span class="n">SYNC</span><span class="p">],</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC371'><span class="n">SHOW_FUNCTION</span><span class="p">(</span><span class="n">vr_async_expire_show</span><span class="p">,</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">fifo_expire</span><span class="p">[</span><span class="n">ASYNC</span><span class="p">],</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC372'><span class="n">SHOW_FUNCTION</span><span class="p">(</span><span class="n">vr_fifo_batch_show</span><span class="p">,</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">fifo_batch</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC373'><span class="n">SHOW_FUNCTION</span><span class="p">(</span><span class="n">vr_rev_penalty_show</span><span class="p">,</span> <span class="n">vd</span><span class="o">-&gt;</span><span class="n">rev_penalty</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC374'><span class="cp">#undef SHOW_FUNCTION</span></div><div class='line' id='LC375'><br/></div><div class='line' id='LC376'><span class="cp">#define STORE_FUNCTION(__FUNC, __PTR, MIN, MAX, __CONV) \</span></div><div class='line' id='LC377'><span class="cp">static ssize_t __FUNC(struct elevator_queue *e, const char *page, size_t count) \</span></div><div class='line' id='LC378'><span class="cp">{ \</span></div><div class='line' id='LC379'><span class="cp">struct vr_data *vd = e-&gt;elevator_data; \</span></div><div class='line' id='LC380'><span class="cp">int __data; \</span></div><div class='line' id='LC381'><span class="cp">int ret = vr_var_store(&amp;__data, (page), count); \</span></div><div class='line' id='LC382'><span class="cp">if (__data &lt; (MIN)) \</span></div><div class='line' id='LC383'><span class="cp">__data = (MIN); \</span></div><div class='line' id='LC384'><span class="cp">else if (__data &gt; (MAX)) \</span></div><div class='line' id='LC385'><span class="cp">__data = (MAX); \</span></div><div class='line' id='LC386'><span class="cp">if (__CONV) \</span></div><div class='line' id='LC387'><span class="cp">*(__PTR) = msecs_to_jiffies(__data); \</span></div><div class='line' id='LC388'><span class="cp">else \</span></div><div class='line' id='LC389'><span class="cp">*(__PTR) = __data; \</span></div><div class='line' id='LC390'><span class="cp">return ret; \</span></div><div class='line' id='LC391'><span class="cp">}</span></div><div class='line' id='LC392'><span class="n">STORE_FUNCTION</span><span class="p">(</span><span class="n">vr_sync_expire_store</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">fifo_expire</span><span class="p">[</span><span class="n">SYNC</span><span class="p">],</span> <span class="mi">0</span><span class="p">,</span> <span class="n">INT_MAX</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC393'><span class="n">STORE_FUNCTION</span><span class="p">(</span><span class="n">vr_async_expire_store</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">fifo_expire</span><span class="p">[</span><span class="n">ASYNC</span><span class="p">],</span> <span class="mi">0</span><span class="p">,</span> <span class="n">INT_MAX</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC394'><span class="n">STORE_FUNCTION</span><span class="p">(</span><span class="n">vr_fifo_batch_store</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">fifo_batch</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">INT_MAX</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC395'><span class="n">STORE_FUNCTION</span><span class="p">(</span><span class="n">vr_rev_penalty_store</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">vd</span><span class="o">-&gt;</span><span class="n">rev_penalty</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">INT_MAX</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC396'><span class="cp">#undef STORE_FUNCTION</span></div><div class='line' id='LC397'><br/></div><div class='line' id='LC398'><span class="cp">#define DD_ATTR(name) \</span></div><div class='line' id='LC399'><span class="cp">__ATTR(name, S_IRUGO|S_IWUSR, vr_##name##_show, \</span></div><div class='line' id='LC400'><span class="cp">vr_##name##_store)</span></div><div class='line' id='LC401'><br/></div><div class='line' id='LC402'><span class="k">static</span> <span class="k">struct</span> <span class="n">elv_fs_entry</span> <span class="n">vr_attrs</span><span class="p">[]</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC403'><span class="n">DD_ATTR</span><span class="p">(</span><span class="n">sync_expire</span><span class="p">),</span></div><div class='line' id='LC404'><span class="n">DD_ATTR</span><span class="p">(</span><span class="n">async_expire</span><span class="p">),</span></div><div class='line' id='LC405'><span class="n">DD_ATTR</span><span class="p">(</span><span class="n">fifo_batch</span><span class="p">),</span></div><div class='line' id='LC406'><span class="n">DD_ATTR</span><span class="p">(</span><span class="n">rev_penalty</span><span class="p">),</span></div><div class='line' id='LC407'><span class="n">__ATTR_NULL</span></div><div class='line' id='LC408'><span class="p">};</span></div><div class='line' id='LC409'><br/></div><div class='line' id='LC410'><span class="k">static</span> <span class="k">struct</span> <span class="n">elevator_type</span> <span class="n">iosched_vr</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC411'><span class="p">.</span><span class="n">ops</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC412'><span class="p">.</span><span class="n">elevator_merge_fn</span> <span class="o">=</span> <span class="n">vr_merge</span><span class="p">,</span></div><div class='line' id='LC413'><span class="p">.</span><span class="n">elevator_merged_fn</span> <span class="o">=</span> <span class="n">vr_merged_request</span><span class="p">,</span></div><div class='line' id='LC414'><span class="p">.</span><span class="n">elevator_merge_req_fn</span> <span class="o">=</span> <span class="n">vr_merged_requests</span><span class="p">,</span></div><div class='line' id='LC415'><span class="p">.</span><span class="n">elevator_dispatch_fn</span> <span class="o">=</span> <span class="n">vr_dispatch_requests</span><span class="p">,</span></div><div class='line' id='LC416'><span class="p">.</span><span class="n">elevator_add_req_fn</span> <span class="o">=</span> <span class="n">vr_add_request</span><span class="p">,</span></div><div class='line' id='LC417'><span class="p">.</span><span class="n">elevator_queue_empty_fn</span> <span class="o">=</span> <span class="n">vr_queue_empty</span><span class="p">,</span></div><div class='line' id='LC418'><span class="p">.</span><span class="n">elevator_former_req_fn</span> <span class="o">=</span> <span class="n">elv_rb_former_request</span><span class="p">,</span></div><div class='line' id='LC419'><span class="p">.</span><span class="n">elevator_latter_req_fn</span> <span class="o">=</span> <span class="n">elv_rb_latter_request</span><span class="p">,</span></div><div class='line' id='LC420'><span class="p">.</span><span class="n">elevator_init_fn</span> <span class="o">=</span> <span class="n">vr_init_queue</span><span class="p">,</span></div><div class='line' id='LC421'><span class="p">.</span><span class="n">elevator_exit_fn</span> <span class="o">=</span> <span class="n">vr_exit_queue</span><span class="p">,</span></div><div class='line' id='LC422'><span class="p">},</span></div><div class='line' id='LC423'><br/></div><div class='line' id='LC424'><span class="p">.</span><span class="n">elevator_attrs</span> <span class="o">=</span> <span class="n">vr_attrs</span><span class="p">,</span></div><div class='line' id='LC425'><span class="p">.</span><span class="n">elevator_name</span> <span class="o">=</span> <span class="s">&quot;vr&quot;</span><span class="p">,</span></div><div class='line' id='LC426'><span class="p">.</span><span class="n">elevator_owner</span> <span class="o">=</span> <span class="n">THIS_MODULE</span><span class="p">,</span></div><div class='line' id='LC427'><span class="p">};</span></div><div class='line' id='LC428'><br/></div><div class='line' id='LC429'><span class="k">static</span> <span class="kt">int</span> <span class="n">__init</span> <span class="nf">vr_init</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC430'><span class="p">{</span></div><div class='line' id='LC431'><span class="n">elv_register</span><span class="p">(</span><span class="o">&amp;</span><span class="n">iosched_vr</span><span class="p">);</span></div><div class='line' id='LC432'><br/></div><div class='line' id='LC433'><span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC434'><span class="p">}</span></div><div class='line' id='LC435'><br/></div><div class='line' id='LC436'><span class="k">static</span> <span class="kt">void</span> <span class="n">__exit</span> <span class="nf">vr_exit</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC437'><span class="p">{</span></div><div class='line' id='LC438'><span class="n">elv_unregister</span><span class="p">(</span><span class="o">&amp;</span><span class="n">iosched_vr</span><span class="p">);</span></div><div class='line' id='LC439'><span class="p">}</span></div><div class='line' id='LC440'><br/></div><div class='line' id='LC441'><span class="n">module_init</span><span class="p">(</span><span class="n">vr_init</span><span class="p">);</span></div><div class='line' id='LC442'><span class="n">module_exit</span><span class="p">(</span><span class="n">vr_exit</span><span class="p">);</span></div><div class='line' id='LC443'><br/></div><div class='line' id='LC444'><span class="n">MODULE_AUTHOR</span><span class="p">(</span><span class="s">&quot;Aaron Carroll&quot;</span><span class="p">);</span></div><div class='line' id='LC445'><span class="n">MODULE_LICENSE</span><span class="p">(</span><span class="s">&quot;GPL&quot;</span><span class="p">);</span></div><div class='line' id='LC446'><span class="n">MODULE_DESCRIPTION</span><span class="p">(</span><span class="s">&quot;V(R) IO scheduler&quot;</span><span class="p">);</span></div><div class='line' id='LC447'><br/></div><div class='line' id='LC448'><br/></div></pre></div>
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

      <p>&copy; 2012 <span title="0.42736s from fe8.rs.github.com">GitHub</span> Inc. All rights reserved.</p>
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

    
    
    
    <span id='server_response_time' data-time='0.43051' data-host='fe8'></span>
  </body>
</html>

