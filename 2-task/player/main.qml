import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Layouts 1.15
import QtQuick.Controls 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("player")

    ColumnLayout {
        anchors.fill: parent

        Rectangle {
            Layout.preferredHeight: 0.9 * parent.height
            Layout.fillWidth: true
            color: "gray";
        }

        ProgressBar {
            Layout.preferredWidth: parent.width
            Layout.fillHeight: true
            value: 0.5
        }

        GridLayout {
            Layout.preferredWidth: parent.width
            Layout.preferredHeight: parent.height * 0.1
            width: parent.width

            Button {
                Layout.alignment: Qt.AlignCenter
                Layout.preferredWidth: 0.2 * parent.width
                Layout.fillHeight: true
                font.pixelSize: parent.height * 0.75
                text: "⏪️"
            }
            Button {
                Layout.alignment: Qt.AlignCenter
                Layout.preferredWidth: 0.2 * parent.width
                Layout.fillHeight: true
                font.pixelSize: parent.height * 0.75
                text: "▶️"
            }
            Button {
                Layout.alignment: Qt.AlignCenter
                Layout.preferredWidth: 0.2 * parent.width
                Layout.fillHeight: true
                font.pixelSize: parent.height * 0.75
                text: "⏸️"
            }
            Button {
                Layout.alignment: Qt.AlignCenter
                Layout.preferredWidth: 0.2 * parent.width
                Layout.fillHeight: true
                font.pixelSize: parent.height * 0.75
                text: "⏹"
            }
            Button {
                Layout.alignment: Qt.AlignCenter
                Layout.preferredWidth: 0.2 * parent.width
                Layout.fillHeight: true
                font.pixelSize: parent.height * 0.75
                text: "⏩️"
            }
        }
    }
}
