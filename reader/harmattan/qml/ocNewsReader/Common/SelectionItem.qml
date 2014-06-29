import QtQuick 1.1
import com.nokia.meego 1.0

Item {

    property alias title: title.text
    property alias titleColor: title.color
    property string initialValue
    property string currentValue
    property alias model: selectionDialog.model
    property string tsBasename

    signal valueChosen(string value)

    x: 0
    width: parent.width
    height: 72

    function getInitialValue() {
        var found = false;
        var i = 0;
        while ((!found) && (i < model.count)) {
            if (model.get(i).value == initialValue) {
                selectionDialog.selectedIndex = i;
                found = true;
            }
            i++;
        }
        currentValue = initialValue;
    }

    onInitialValueChanged: getInitialValue()
    Component.onCompleted: getInitialValue()

    Column {

        anchors { left: parent.left; leftMargin: 0; verticalCenter: parent.verticalCenter }

        Label {
            id: title
            font.pixelSize: 24
            font.bold: true
            color: theme.inverted? "white" : "black"
            verticalAlignment: Text.AlignVCenter
            textFormat: Text.PlainText
        }

        Label {
            id: subTitle
            color: "gray"
            verticalAlignment: Text.AlignVCenter
            text: qsTranslate(tsBasename, model.get(selectionDialog.selectedIndex).name)
            font.pixelSize: 22
            textFormat: Text.PlainText
        }
    }

    Image {
        anchors { right: parent.right; verticalCenter: parent.verticalCenter }
        source: "file:///usr/share/themes/blanco/meegotouch/images/theme/basement/meegotouch-button/meegotouch-combobox-indicator" + (theme.inverted? "-inverted" : "") + ".png"
        sourceSize.width: width
        sourceSize.height: height
    }

    MouseArea {
        id: mouseArea
        anchors.fill: parent
        onClicked: selectionDialog.open()
    }

    SelectionDialog {
        id: selectionDialog
        titleText: title.text
        delegate: Item {
            id: delegateItem
            property bool selected: index == selectedIndex;

            height: root.platformStyle.itemHeight
            anchors { left: parent.left; right: parent.right; }

            MouseArea {
                id: delegateMouseArea
                anchors.fill: parent;
                onPressed: selectedIndex = index;
                onClicked:  accept();
            }


            Rectangle {
                id: backgroundRect
                anchors.fill: parent
                color: delegateItem.selected ? root.platformStyle.itemSelectedBackgroundColor : root.platformStyle.itemBackgroundColor
            }

            BorderImage {
                id: background
                anchors.fill: parent
                //border { left: UI.CORNER_MARGINS; top: UI.CORNER_MARGINS; right: UI.CORNER_MARGINS; bottom: UI.CORNER_MARGINS }
                source: delegateMouseArea.pressed ? root.platformStyle.itemPressedBackground : ""
            }

            Text {
                id: itemText
                elide: Text.ElideRight
                color: delegateItem.selected ? root.platformStyle.itemSelectedTextColor : root.platformStyle.itemTextColor
                anchors { verticalCenter: delegateItem.verticalCenter; left: parent.left; right: parent.right; leftMargin: root.platformStyle.itemLeftMargin; rightMargin: root.platformStyle.itemRightMargin }
                text: qsTranslate(tsBasename, name)
                font: root.platformStyle.itemFont
                textFormat: Text.PlainText
            }
        }
        onAccepted: {
            currentValue = model.get(selectedIndex).value;
            valueChosen(model.get(selectedIndex).value);
        }
    }
}
