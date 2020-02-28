import bl2sdk
import webbrowser

""" The path to our mods folder, determined via the directory containing the current executable (Borderlands2.exe)."""
Win32Directory = os.path.dirname(sys.executable)
ModsDirectory = os.path.join(Win32Directory, "Mods")

class DefaultMod(bl2sdk.BL2MOD):

    Name = "General"
    Status = ""
    Description = "Welcome to the Borderlands 2 Mod Manager\n\nSee below for options."
    SettingsInputs = {"O": "Open Mods Folder", "R": "Reload Mods", "H": "Help"}
    Types = []
    Author = "Abahbob"
    Options = [
            Options.Slider("Test Slider", "A testing description", -500,-7000,7000,10),
            Options.Boolean("Test Boolean", "A testing description for a boolean", True),
            Options.Spinner("Test Spinner", "A testing description", "Hello", ["Hello","World"]),
            Options.Hidden("TestingHidden", 52)
        ]

    def __init__(self):
        for Currency in bl2sdk.FindAll("CurrencyListDefinition")[-1].Currencies:
            Max = "Engine.WillowInventory.GetCappedCurrencyAmount" ...
            Values = ['9' * x for x in range(1, len(str(Max)))]
            Values += str(max)
            Values += ['9' * x for x in range(len(str(Max)), len(str(Max)) * 10)]
            Options.append(Options.Spinner("Max {Currency.WidgetFrame}", "The maximum amount of {Currency.WidgetFrame} that you can hold", Values))

    def SettingsInputPressed(self, name):
        if name == "Open Mods Folder":
            os.startfile(ModsDirectory)
        elif name == "Reload Mods":
            pass
        elif name == "Help":
            webbrowser.open("https://github.com/bl-sdk/BL2-Python-Plugins/wiki")

bl2sdk.RegisterMod(DefaultMod())