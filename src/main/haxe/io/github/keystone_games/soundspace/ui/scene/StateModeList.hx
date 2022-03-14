package io.github.keystone_games.soundspace.ui.scene;

import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.FlxState;

class StateModeList extends FlxState {
    public static var titleText:FlxText;

    public static var modeClassicText:FlxText;
    public static var modePongText:FlxText;
    public static var modeKeyboardText:FlxText;
    public static var modeBeatText:FlxText;

    public override function create() {
        super.create();

        titleText = new FlxText(0, 0, 0, "Select a Mode").setFormat(null, 64, FlxColor.WHITE, CENTER);
        titleText.screenCenter(X);
        add(titleText);

        var center = FlxG.width / 2;

        modeClassicText = new FlxText(0, 0, 0, "Classic").setFormat("resources/assets/fonts/monsterrat.ttf", 32, FlxColor.GREEN, CENTER);
        modeClassicText.screenCenter(XY);
        modeClassicText.x -= 1024;
        modeClassicText.y += 256;
        add(modeClassicText);

        modePongText = new FlxText(0, 0, 0, "Pong").setFormat("resources/assets/fonts/monsterrat.ttf", 32, FlxColor.GREEN, CENTER);
        modePongText.screenCenter(XY);
        modePongText.x -= 512;
        modePongText.y += 256;
        add(modePongText);

        modeKeyboardText = new FlxText(0, 0, 0, "Keyboard").setFormat("resources/assets/fonts/monsterrat.ttf", 32, FlxColor.GREEN, CENTER);
        modeKeyboardText.screenCenter(XY);
        modeKeyboardText.x += 512;
        modeKeyboardText.y += 256;
        add(modeKeyboardText);

        modeBeatText = new FlxText(0, 0, 0, "Beat").setFormat("resources/assets/fonts/monsterrat.ttf", 32, FlxColor.GREEN, CENTER);
        modeBeatText.screenCenter(XY);
        modeBeatText.x += 1024;
        modeBeatText.y += 256;
        add(modeBeatText);
    }
    public override function update(dt:Float) {
        super.update(dt);
    }
}