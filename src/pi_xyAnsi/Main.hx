package pi_xyAnsi;

class Main {
    public static function main(){
        new Main();
    }
    public function new(){
        var p = new pi_xy.Pixelimage( 100, 100 );
        p.transparent = false;
        var Violet      = 0xFF9400D3;
        var Indigo      = 0xFF4b0082;
        var Blue        = 0xFF0000FF;
        var Green       = 0xFF00ff00;
        var Yellow      = 0xFFFFFF00;
        var Orange      = 0xFFFF7F00;
        var Red         = 0xFFFF0000;
        var scale       = 10;
        var colors = [ Violet, Indigo, Blue, Green, Yellow, Orange, Red ];
        var vertColor = colors[0];
        for( x in 0...70 ){
            vertColor = colors[ Math.floor( x/10 ) ];
            for( y in 0...70 ) p.setARGB( x, y, vertColor );
        }
        p.gradientShape.triangle( 10, 10, 0xffffffff, 60, 44, 0xff000000, 24, 60, 0xff999999 );
        //p.gradientShape.triangle( 22, 23, 0xcfcff0000, 70, 60, 0xcc0000FF, 28, 64, 0xcc00ff00 );
        p.ansi.ansiSimple( 0.8 );
    }

}
