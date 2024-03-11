class CfgPatches 
{
    class TLRDUGBASEDECAY
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {};
    };
};

class CfgMods 
{
    class TLRDUGBASEDECAY
    {
        dir = "TLRDUGBASEDECAY";
        picture = "";  // Path to a mod logo picture
        action = "";   // Action performed when clicking on the mod entry
        name = "TLRDUGBASEDECAY";
		credits = "MISFITNO1";
		author = "MISFITNO1";
        hideName = 1;
        hidePicture = 1;
        version = "1.0";
        extra = 0;
        type= "mod";
        
        dependencies[] = {"World"};
        
        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = {"TLRDUGBASEDECAY/Scripts/4_World"};
            };
        };
    };
};
