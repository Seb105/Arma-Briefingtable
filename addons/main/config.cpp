#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = "Seb";
        VERSION_CONFIG;
    };
};

class CfgFunctions {
    class sebs_briefing_table {
        class sebs_briefing_table {
            file = "z\sebs_briefing_table\addons\main\functions";
            class createTable {};
            class clearTable {};
        };
    };
};

#include "CfgEventHandlers.hpp"
