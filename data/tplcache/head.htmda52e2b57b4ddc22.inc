<?php
$z[0]=Array("global","",138,164);
$z[0][4]=array();
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",276,298);
$z[1][4]=array();
$z[1][4]['name']="cfg_tel";
$z[2]=Array("field","(@me==\"\")? @me=\" class='Lev1 current-menu-item page_item' \":@me=\"\";",643,760);
$z[2][4]=array();
$z[2][4]['name']="typeid";
$z[2][4]['runphp']="yes";
$z[3]=Array("channelartlist","\r\n        <li class=\"Lev1 {dede:field.currentstyle/} page_item\" id=\"nav_8\"> <a href=\"{dede:field name='typeurl'/}\" class=\"menu1\">{dede:field name='typename'/} <i {dede:field name=typeid runphp=\"yes\"}\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->GetOne(\$sql);\r\n          @me=is_array(\$row)?'class=\"fa fa-caret-down\"':'style=\"display:none\"';\r\n          {/dede:field}></i></a>\r\n          <ul {dede:field name=typeid runphp=\"yes\"}\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->\r\n            GetOne(\$sql);\r\n            @me=is_array(\$row)?'class=\"dr-menu sub-menu2\"':'style=\"display:none\"';\r\n            {/dede:field}>\r\n            {dede:channel type='son' noself='yes'}\r\n            <li class=\"Lev2\"> <a href=\"[field:typeurl/]\" class=\"menu2\">[field:typename/]</a> </li>\r\n            {/dede:channel}\r\n          </ul>\r\n        </li>\r\n        ",829,1940);
$z[3][4]=array();
$z[3][4]['typeid']="top";
$z[3][4]['currentstyle']="current-menu-item";

?>