# For all your tacticool planning needs!
<img src="https://i.imgur.com/mJxccbg.png" alt="Seb's Briefing Table" style="display: block; text-align: center">
Any area, any table, any map. This mod provides some scripting functions which can turn any table, and any area on the map, into a minified representation. Custom-placed objects included!

Also contained in the mod folder is a standalone mission template which allows you to use the mod WITHOUT the server or its players needing to install anything.
It also functions as a demonstration of how to use the features of the mod. Both the mod and this mission have the same features.

### Features:
- Any size of area can fit onto any table, it's all handled for you
- Creates buildings where they are in the real map
- Also works for custom buildings placed in editor.
- Roughly matches terrain, as best as the game allows
- Can scale to fit multiple tables
- Multiple tables can display the same or different areas.
- Doesn't display REALLY small stuff, to keep the lag down.
- Hidden objects are hidden (with a bit of extra work, see examples section)
- Standalone version contained within mod folder, so you can use this without running this mods.

### HOW TO USE:

The mod provides 2 scripting functions:
`sebs_briefing_table_fnc_createTable` and `sebs_briefing_table_fnc_clearTable`

First, place a table. Then use an AREA marker in the editor to cover the area you want to create a table for. Give the area marker a custom name, or just remember what it is called.

Using fnc_createTable the parameters are:
* Table on which to create the minified representation. If a minified representation already exists, it will be cleared before starting. <OBJECT>
* AREA marker string representation (i.e "marker_0") <STRING>
* Optional <NUMBER> (default: 20) - Terrain resolution (x*y resolution of terrain cubes). Setting this too high will be VERY laggy.
* Optional <NUMBER> (default: 1) - Scale multiplier. 3 = map is 3x the size of the table. Useful for spanning multiple tables.
* Optional <BOOL> (default: true). Use terrain. If false then the map will be entirely flat. Just like the earth ;)
* Optional <BOOL> (default: true) - Create environment sounds trigger:
* Create a trigger that disables environmental sounds when the current unit comes near, and puts it back to its original state when the player leaves.
This is because all the bushes that appear on the table will still play cricket sounds, buildings will play air conditoner hums etc
* Optional <NUMBER> (default: 0) - Offset Z height. If your map doesn't fit on your table quite right, use this to tweak how high the entire thing shows up.

All script effects are local.
In order for hidden objects to actually be hidden, the function must be called after mission start. See the example mission for how to do this.

### EXAMPLES

TABLE OBJECT INIT (Multiplayer and join in progress compatible)
`[this, "marker_0", 20, 1, true, true] call sebs_briefing_table_fnc_createTable;`

SCRIPT CALL (Multiplayer and join in progress compatible):
NEVER EVER EVER REMOTEXEC FROM OBJECT INIT!
IF YOU DON'T UNDERSTAND WHAT I MEAN USE THE FIRST EXAMPLE
`[table, "marker_0", 20, 1, true, true] remoteExec ["sebs_briefing_table_fnc_createTable", 0, table];`


#### To clear a table:
Simply call fnc_clearTable with the table as an argument, and a JIP argument:
`[table] remoteExec ["sebs_briefing_table_fnc_clearTable", 0, table];`

______

##### Looking for an Arma community? Check CNTO out:

https://www.carpenoctem.co/

https://www.youtube.com/watch?v=QE8tMdhDYjI


Special thanks to Leopard20 for some contributions to the code.
