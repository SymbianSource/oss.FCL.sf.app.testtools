/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies). 
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
* 
* Description: This file contains CTestSetBaseMenuView class declaration.
*
*/

#ifndef TESTSETBASEMENUVIEW_H
#define TESTSETBASEMENUVIEW_H

// INCLUDES
#include "View.h"
#include <eiklbo.h> // MEikListBoxObserver
#include <aknnavide.h> 


// CONSTANTS

// FORWARD DECLARATIONS
class CTestSetBaseMenuContainer;

// CLASS DECLARATION

/**
*  CTestSetBaseMenuView view class.
* 
*/
class CTestSetBaseMenuView : public CView, public MEikListBoxObserver
    {
    public: // Constructors and destructor

        /**
        * Symbian OS default constructor.
        */
        void ConstructL();

        /**
        * Destructor.
        */
        ~CTestSetBaseMenuView();

    public: // Functions from base classes
        
        /**
        * Returns view�s id.
        * @return View id.
        */
        TUid Id() const;

        /**
        * Handles a command.
        * @param aCommand A command ID.
        */
        void HandleCommandL( TInt aCommand );

        /**
        * Handles client rect changes.
        */
        void HandleClientRectChange();

        /**
        * Handles a list box event.
        * @param aListBox A pointer to list box.
        * @param aEventType Type of list box event.
        */
        void HandleListBoxEventL(CEikListBox* aListBox, TListBoxEvent aEventType);

    private:

        /**
        * Initializes view when activated.
        * @param aPrevViewId Id of the previous view (not used).
        * @param aCustomMessageId Custom message id (not used).
        * @param aCustomMessage Custom message (not used).
        */
        void DoActivateL(const TVwsViewId& aPrevViewId,TUid aCustomMessageId,
            const TDesC8& aCustomMessage);

        /**
        * Deactivates view.
        */
        void DoDeactivate();

    private: // Data
        CAknNavigationDecorator*    iNaviDecorator;
        CTestSetBaseMenuContainer*  iContainer;
    };

#endif

// End of File
