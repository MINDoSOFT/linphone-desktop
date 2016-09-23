pragma Singleton
import QtQuick 2.7

QtObject {
    property int animationDuration: 200
    property int iconSize: 32
    property string icon: 'collapse'

    property var background: Rectangle {
        color: 'transparent'
    }
}