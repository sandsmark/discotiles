import QtQuick 1.1
Grid {
    anchors.fill: parent;
    columns: 5;
    rows: 5;
    Repeater {
        model: parent.columns * parent.rows;
        Rectangle {
            border.color: "blue";
            color: "blue";
            height: parent.height / parent.rows;
            width: parent.width / parent.columns;
            ColorAnimation on color {
                to: "#000055";
                duration: Math.random()*500+500;
                loops: Animation.Infinite;
            }
        }
    }
}
