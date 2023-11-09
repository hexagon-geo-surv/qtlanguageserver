// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial

// this file was generated by the generate.ts script

#include <QtLanguageServer/private/qlspnotifysignals_p.h>

QT_BEGIN_NAMESPACE

using namespace QLspSpecification;

void QLspNotifySignals::registerHandlers(QLanguageServerProtocol *protocol)
{

    protocol->registerCancelNotificationHandler(
            [this, protocol](const QByteArray &method,
                             const QLspSpecification::Notifications::CancelParamsType &params) {
                static const QMetaMethod notificationSignal =
                        QMetaMethod::fromSignal(&QLspNotifySignals::receivedCancelNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedCancelNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerInitializedNotificationHandler(
            [this,
             protocol](const QByteArray &method,
                       const QLspSpecification::Notifications::InitializedParamsType &params) {
                static const QMetaMethod notificationSignal = QMetaMethod::fromSignal(
                        &QLspNotifySignals::receivedInitializedNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedInitializedNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerExitNotificationHandler(
            [this, protocol](const QByteArray &method,
                             const QLspSpecification::Notifications::ExitParamsType &params) {
                static const QMetaMethod notificationSignal =
                        QMetaMethod::fromSignal(&QLspNotifySignals::receivedExitNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedExitNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerLogTraceNotificationHandler(
            [this, protocol](const QByteArray &method,
                             const QLspSpecification::Notifications::LogTraceParamsType &params) {
                static const QMetaMethod notificationSignal =
                        QMetaMethod::fromSignal(&QLspNotifySignals::receivedLogTraceNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedLogTraceNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerSetTraceNotificationHandler(
            [this, protocol](const QByteArray &method,
                             const QLspSpecification::Notifications::SetTraceParamsType &params) {
                static const QMetaMethod notificationSignal =
                        QMetaMethod::fromSignal(&QLspNotifySignals::receivedSetTraceNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedSetTraceNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerShowMessageNotificationHandler(
            [this,
             protocol](const QByteArray &method,
                       const QLspSpecification::Notifications::ShowMessageParamsType &params) {
                static const QMetaMethod notificationSignal = QMetaMethod::fromSignal(
                        &QLspNotifySignals::receivedShowMessageNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedShowMessageNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerLogMessageNotificationHandler(
            [this, protocol](const QByteArray &method,
                             const QLspSpecification::Notifications::LogMessageParamsType &params) {
                static const QMetaMethod notificationSignal =
                        QMetaMethod::fromSignal(&QLspNotifySignals::receivedLogMessageNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedLogMessageNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerWorkDoneProgressCancelNotificationHandler(
            [this,
             protocol](const QByteArray &method,
                       const QLspSpecification::Notifications::WorkDoneProgressCancelParamsType
                               &params) {
                static const QMetaMethod notificationSignal = QMetaMethod::fromSignal(
                        &QLspNotifySignals::receivedWorkDoneProgressCancelNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedWorkDoneProgressCancelNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerTelemetryEventNotificationHandler(
            [this,
             protocol](const QByteArray &method,
                       const QLspSpecification::Notifications::TelemetryEventParamsType &params) {
                static const QMetaMethod notificationSignal = QMetaMethod::fromSignal(
                        &QLspNotifySignals::receivedTelemetryEventNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedTelemetryEventNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerDidChangeWorkspaceFoldersNotificationHandler(
            [this,
             protocol](const QByteArray &method,
                       const QLspSpecification::Notifications::DidChangeWorkspaceFoldersParamsType
                               &params) {
                static const QMetaMethod notificationSignal = QMetaMethod::fromSignal(
                        &QLspNotifySignals::receivedDidChangeWorkspaceFoldersNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedDidChangeWorkspaceFoldersNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerDidChangeConfigurationNotificationHandler(
            [this,
             protocol](const QByteArray &method,
                       const QLspSpecification::Notifications::DidChangeConfigurationParamsType
                               &params) {
                static const QMetaMethod notificationSignal = QMetaMethod::fromSignal(
                        &QLspNotifySignals::receivedDidChangeConfigurationNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedDidChangeConfigurationNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerDidChangeWatchedFilesNotificationHandler(
            [this, protocol](const QByteArray &method,
                             const QLspSpecification::Notifications::DidChangeWatchedFilesParamsType
                                     &params) {
                static const QMetaMethod notificationSignal = QMetaMethod::fromSignal(
                        &QLspNotifySignals::receivedDidChangeWatchedFilesNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedDidChangeWatchedFilesNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerCreateFilesNotificationHandler(
            [this,
             protocol](const QByteArray &method,
                       const QLspSpecification::Notifications::CreateFilesParamsType &params) {
                static const QMetaMethod notificationSignal = QMetaMethod::fromSignal(
                        &QLspNotifySignals::receivedCreateFilesNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedCreateFilesNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerRenameFilesNotificationHandler(
            [this,
             protocol](const QByteArray &method,
                       const QLspSpecification::Notifications::RenameFilesParamsType &params) {
                static const QMetaMethod notificationSignal = QMetaMethod::fromSignal(
                        &QLspNotifySignals::receivedRenameFilesNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedRenameFilesNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerDeleteFilesNotificationHandler(
            [this,
             protocol](const QByteArray &method,
                       const QLspSpecification::Notifications::DeleteFilesParamsType &params) {
                static const QMetaMethod notificationSignal = QMetaMethod::fromSignal(
                        &QLspNotifySignals::receivedDeleteFilesNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedDeleteFilesNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerDidOpenTextDocumentNotificationHandler(
            [this, protocol](
                    const QByteArray &method,
                    const QLspSpecification::Notifications::DidOpenTextDocumentParamsType &params) {
                static const QMetaMethod notificationSignal = QMetaMethod::fromSignal(
                        &QLspNotifySignals::receivedDidOpenTextDocumentNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedDidOpenTextDocumentNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerDidChangeTextDocumentNotificationHandler(
            [this, protocol](const QByteArray &method,
                             const QLspSpecification::Notifications::DidChangeTextDocumentParamsType
                                     &params) {
                static const QMetaMethod notificationSignal = QMetaMethod::fromSignal(
                        &QLspNotifySignals::receivedDidChangeTextDocumentNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedDidChangeTextDocumentNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerWillSaveTextDocumentNotificationHandler(
            [this, protocol](const QByteArray &method,
                             const QLspSpecification::Notifications::WillSaveTextDocumentParamsType
                                     &params) {
                static const QMetaMethod notificationSignal = QMetaMethod::fromSignal(
                        &QLspNotifySignals::receivedWillSaveTextDocumentNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedWillSaveTextDocumentNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerDidSaveTextDocumentNotificationHandler(
            [this, protocol](
                    const QByteArray &method,
                    const QLspSpecification::Notifications::DidSaveTextDocumentParamsType &params) {
                static const QMetaMethod notificationSignal = QMetaMethod::fromSignal(
                        &QLspNotifySignals::receivedDidSaveTextDocumentNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedDidSaveTextDocumentNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerDidCloseTextDocumentNotificationHandler(
            [this, protocol](const QByteArray &method,
                             const QLspSpecification::Notifications::DidCloseTextDocumentParamsType
                                     &params) {
                static const QMetaMethod notificationSignal = QMetaMethod::fromSignal(
                        &QLspNotifySignals::receivedDidCloseTextDocumentNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedDidCloseTextDocumentNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });

    protocol->registerPublishDiagnosticsNotificationHandler(
            [this, protocol](
                    const QByteArray &method,
                    const QLspSpecification::Notifications::PublishDiagnosticsParamsType &params) {
                static const QMetaMethod notificationSignal = QMetaMethod::fromSignal(
                        &QLspNotifySignals::receivedPublishDiagnosticsNotification);
                if (isSignalConnected(notificationSignal))
                    emit receivedPublishDiagnosticsNotification(params);
                else
                    protocol->handleUndispatchedNotification(method, params);
            });
}

QT_END_NAMESPACE
